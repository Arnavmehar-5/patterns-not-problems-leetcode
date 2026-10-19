
class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        int n = nums.size();
        sort(nums.begin(), nums.end());

        vector<int> ans;
        int cntLess = 0, cntTarget = 0;

        for (auto it : nums) {
            if (it < target) {
                cntLess++;
            } else if (it == target) {
                cntTarget++;
            }
        }

        for (int i = cntLess; i < cntLess + cntTarget; i++) {
            ans.push_back(i);
        }

        return ans;
    }
};
