#include <iostream>
using namespace std;

// 1. Fixed the print function issue
void printArray(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

// 2. Fixed line 4 syntax and added optimization
void bubble_sort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        bool is_swapped = false; // Track if a swap happens in this pass
        
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                is_swapped = true; // A swap occurred!
            }
        }
        
        // This is where your logic belongs! Inside the loop.
        // If no two elements were swapped by the inner loop, then the array is sorted.
        if (is_swapped == false) {
            break; 
        }
    }
    
    // Call the print function
    printArray(arr, n);
}

// 3. Every C++ program needs a main function to run hardcoded values
int main() {
    int arr[] = {3,6,2,1,8,7,4,5,3,1};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    cout << "Sorted array: ";
    bubble_sort(arr, n);
    
    return 0;
}