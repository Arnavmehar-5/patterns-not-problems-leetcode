class Solution {
public:
    int sumCounts(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;

        for (int i = 0; i < n; i++) {
            set<int> st;

            for (int j = i; j < n; j++) {
                // 1. Insert nums[j] into the set
                st.insert(nums[j]);

                // 2. Get the distinct count
                int distinctCount = st.size();

                // 3. Add its square to ans

                ans += distinctCount * distinctCount;
            }
        
        }

        return ans;
    }
};