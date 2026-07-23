// //Question1: Print the number of all 7's that are in the 2D array. Do it for alll values gives as input 

// #include <iostream>
// using namespace std;

// int main() {
    
//     int n, m;
//     cout << "Enter the number of rows: ";
//     cin >> n;
//     cout << "Enter the number of columns: ";
//     cin >> m;

//     int arr[n][m];
//     cout << "Enter the elements of the array: ";
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             cin >> arr[i][j];
//         }
//     }

//     int count = 0;
//     for (int i = 0; i < n; i++) {
//         for (int j = 0; j < m; j++) {
//             if (arr[i][j] == 7) {
//                 count++;
//             }
//         }
//     }

//     cout << "Number of 7's in the array: " << count << endl;

//     return 0;
// }

//Question 2: Print out the sum of the numbers in the second row of the “nums” array. Example: Input: int nums[][]={{1,4,9},{11,4,3},{2,2,3}}; Output: 18

// #include <iostream>
// using namespace std;

// int main() {
    
//     int nums[3][3] = {{1, 4, 9}, {11, 4, 3}, {2, 2, 3}};
//     int sum = 0;

//     for (int j = 0; j < 3; j++) {
//         sum += nums[1][j]; // Accessing the second row (index 1)
//     }

//     cout << "Sum of the numbers in the second row: " << sum << endl;

//     return 0;
// }

//Question 3: Write a program to find the transpose of a matrix.

#include <iostream>
using namespace std;

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    int matrix[rows][cols];
    cout << "Enter the elements of the matrix:" << endl;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            cin >> matrix[i][j];
        }
    }

    // Transpose of the matrix
    int transpose[cols][rows];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    cout << "Transpose of the matrix:" << endl;
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            cout << transpose[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}