#include <stdio.h> 
#include <stdlib.h> // Required for abs()
#include <math.h>   // Required if you use fabs()

// Defining a macro for max since C doesn't have it built-in
#define max(a, b) ((a) > (b) ? (a) : (b))

int main () {
    // int a, b;
    // printf("Enter two integers: ");
    // scanf("%d%d", &a, &b);

    // // 1. Absolute value of a single number
    // int abs_a = abs(a); 
    
    // // 2. Absolute difference between a and b
    // int abs_diff = abs(a - b); 

    // // 3. Maximum of a and b
    // int maximum = max(a, b);

    // printf("Absolute of A: %d\n", abs_a);
    // printf("Absolute Diff: %d\n", abs_diff);
    // printf("Max value: %d\n", maximum);


    // Fab - difference between two floating-point numbers
    double x, y;
    printf("Enter two floating-point numbers: ");
    scanf("%lf%lf", &x, &y);
    double fab_diff = fabs(x - y);
    printf("Absolute difference: %lf\n", fab_diff);

    return 0;
}


