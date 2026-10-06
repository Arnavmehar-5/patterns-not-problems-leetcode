class Solution {
public:
    int minAddToMakeValid(string s) {

        int open = 0;   // unmatched '('
        int ans = 0;    // parentheses we need to add

        for (char ch : s) {

            if (ch == '(') {
                open++;
            }
            else {  // ch == ')'

                if (open > 0) {
                    open--;    // match ')' with an existing '('
                }
                else {
                    ans++;     // need to add '('
                }
            }
        }

        // Remaining '(' need a ')' each
        ans += open;

        return ans;
    }
};