// sqrt_nonneg.cpp
// Square root of a non-negative number
#include <iostream>
#include <cmath>
using namespace std;
    
    int mySqrt(int x) {
        if (x < 2) return x;

        int left = 1, right = x / 2;

        while (left <= right) {
            int mid = left + (right - left) / 2;
            long long square = (long long) mid * mid;

            if (square == x) {
                return mid;
            } else if (square < x) {
                left = mid + 1;
            } else {
                right = mid - 1;
            }
        
        }
        return right;   
        }
    int main () {
    int x;
    cin >> x;
    cout << mySqrt(x);
    return 0;
    }