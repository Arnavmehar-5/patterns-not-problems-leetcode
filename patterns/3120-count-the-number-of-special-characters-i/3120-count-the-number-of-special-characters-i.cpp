class Solution {
public:
    int numberOfSpecialChars(string word) {
        int lower[26] = {};
        int upper[26] = {};

        for (char c : word) {
            if (c >= 'a' && c <= 'z') {

                lower[c - 'a'] = true;
            }
                 else {
                upper[c - 'A'] = true;
            
            }
        }

        int count = 0;

for (int i = 0; i < 26; i++) {
    if (lower[i] && upper[i]) {
        count++;
    }
} 
        return count;
    }
};