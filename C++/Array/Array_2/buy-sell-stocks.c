#include <stdio.h>
#include <math.h>



#define max(a, b) ((a) > (b) ? (a) : (b))
#define min(a, b) ((a) < (b) ? (a) : (b))

int main (int* prices, int pricesSize) {
    
    if (pricesSize <= 1) {
        return 0;
    }

    
    int min_price = prices[0]; 
    int max_profit = 0;       


    for (int i = 1; i < pricesSize; i++) {
      
        int potential_profit = prices[i] - min_price;
        
        
        max_profit = max(max_profit, potential_profit);
        
      
        min_price = min(min_price, prices[i]);
    }

   
    return max_profit;
}