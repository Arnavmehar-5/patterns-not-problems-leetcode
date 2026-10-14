#include <vector>
#include <string>

using namespace std;

class Solution {
public:
    vector<string> ans;
    int n;

    void solve(string curr, int open, int close) {
        if (curr.length() == 2 * n) {
            ans.push_back(curr);
            return;
        }

        // Pass curr + "(" without mutating curr in-place
        if (open < n) {
            solve(curr + '(', open + 1, close);
        }

        if (close < open) {
            solve(curr + ')', open, close + 1);
        }
    }

    vector<string> generateParenthesis(int n) {
        this->n = n;
        ans.clear();

        string curr = "";
        solve(curr, 0, 0);

        return ans;
    }
};