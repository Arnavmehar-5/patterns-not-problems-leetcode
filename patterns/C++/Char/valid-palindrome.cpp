//Valid palindrome checker without strings library
#include <iostream>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str);
    
    int left = 0;
    int right = str.length() - 1;
    
    while (left < right) {
        // Move left pointer to the next alphanumeric character
        while (left < right && !isalnum(str[left])) {
            left++;
        }
        // Move right pointer to the previous alphanumeric character
        while (left < right && !isalnum(str[right])) {
            right--;
        }
        
        // Compare characters ignoring case
        if (tolower(str[left]) != tolower(str[right])) {
            cout << "Not a palindrome" << endl;
            return 0;
        }
        
        left++;
        right--;
    }
    
    cout << "Palindrome" << endl;
    return 0;
}

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;
//     for (char &c : word) {
//         c = tolower(c);
//     }
//     cout << word << endl;
//     return 0;
// }