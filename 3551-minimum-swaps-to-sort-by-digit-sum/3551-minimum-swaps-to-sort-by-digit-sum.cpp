class Solution {
public:
    int minSwaps(vector<int>& nums) {
        int n = nums.size();

        // Step 1: so We need to Calculate digit sum
        auto digitSum = [](int num) {
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            return sum;
        };

        // Step 2: then we  Store {digit sum, number, original index}
        vector<tuple<int, int, int>> arr;

        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i], i});
        }

        // Step 3: Sort by digit sum, then number
        sort(arr.begin(), arr.end());

        // Step 4: Count minimum swaps using cycles
        vector<bool> visited(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {

            // Skip already visited indices
            if (visited[i] || get<2>(arr[i]) == i) {
                continue;
            }

            int j = i;
            int cycleLength = 0;

            // Follow the original indices
            while (!visited[j]) {
                visited[j] = true;

                j = get<2>(arr[j]);
                cycleLength++;
            }

            // A cycle of k elements needs k - 1 swaps
            swaps += cycleLength - 1;
        }

        return swaps;
    }
};