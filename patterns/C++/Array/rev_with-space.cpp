//Error - rev_with-space.cpp: In function 'void printArr(int*, int)':
// rev_with-space.cpp:50:6: error: redefinition of 'void printArr(int*, int)'
//  void printArr(int arr[], int n) {
//       ^~~~~~~~
// rev_with-space.cpp:34:6: note: 'void printArr(int*, int)' previously defined here
//  void printArr(int arr[], int n) {
//       ^~~~~~~~
// Reverse with space
#include <iostream>
#include <vector>
using namespace std;
void printArr() {

}
int main() {
    int arr[] = {5,4,3,9,2};
    int n = sizeof(arr)/ sizeof(int);
    vector<int> copyArr(n);
    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }
    // print result
    for (int i = 0; i < n; i++) cout << arr[i] << (i+1<n? ' ':'\n');
    return 0;
}

// Reverse without space

void reverseWithoutSpace(int arr[], int n) {
    for (int i = 0; i < n / 2; i++) {
        int j = n - i - 1;
        swap(arr[i], arr[j]);
    }
}


void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << (i+1<n? ' ':'\n');
}
 void reverseWithSpace(int arr[], int n) {
    vector<int> copyArr(n);
    for (int i = 0; i < n; i++) {
        int j = n - i - 1;
        copyArr[i] = arr[j];
    }
    for (int i = 0; i < n; i++) {
        arr[i] = copyArr[i];
    }

    
}

void printArr(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << (i+1<n? ' ':'\n');
}
