class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();

        // S-1 :Square every element
        for (int i = 0; i < n; i++) {
            nums[i] = nums[i] * nums[i];
        }

        // S-2: Sort squares in ascending order
        sort(nums.begin(), nums.end());

        long long sum = 0;

        // S-3: Subtract the smaller half
        for (int i = 0; i < n / 2; i++) {
            sum -= nums[i];
        }

        // Step 4: Add the larger half
        for (int i = n / 2; i < n; i++) {
            sum += nums[i];
        }

        return sum;
    }
};