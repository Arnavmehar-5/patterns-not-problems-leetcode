class Solution {
public:
    bool checkDivisibility(int n) {

        int original = n;
        int digit_sum = 0;
        int digit_product = 1;
        
        while (n > 0) {
    int digit = n % 10; 

            digit_sum += digit;
            digit_product *= digit;

            n = n / 10;        
}

return original % (digit_sum + digit_product) == 0;

    }
};