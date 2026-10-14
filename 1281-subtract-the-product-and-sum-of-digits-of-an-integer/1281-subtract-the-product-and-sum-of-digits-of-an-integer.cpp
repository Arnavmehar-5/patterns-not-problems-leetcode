class Solution {
public:
    int subtractProductAndSum(int n) {

        int sum = 0;
        int prod = 1;
         int res;
         
         while(n > 0) {
         int dig = n % 10;

         sum += dig;

         prod *= dig ;
         n = n / 10;

    }
return prod - sum;
    }
};