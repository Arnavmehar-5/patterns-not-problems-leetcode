class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {

int n;
        while (right > left) {
            right = n = n & (n - 1);;
        }

        return right;
    }
};