//1 . a.  Convert word to Upper case using in-built functions, take input from user
// #include <iostream>
// #include <cctype>
// using namespace std;

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;
//     for (char &c : word) {
//         c = toupper(c);
//     }
//     cout << word << endl;
//     return 0;
// }
 //1. b.  Convert word to Upper case,without using any in-built functions.

// #include <iostream>
// using namespace std;

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;
//     for (char &c : word) {
//         if (c >= 'a' && c <= 'z') {
//             c = c - 'a' + 'A';
//         }
//     }
//     cout << word << endl;
//     return 0;
// }

// 2 . a. Convert word to Lower case, without using any in-built functions, take input from user

// #include <iostream>
// using namespace std;

// int main() {
//     string word;
//     cout << "Enter a word: ";
//     cin >> word;
//     for (char &c : word) {
//         if (c >= 'A' && c <= 'Z') {
//             c = c + 'a' - 'A';
//         }
//     }
//     cout << word << endl;
//     return 0;
// }

//2 . b. Convert word to Lower case, using in-built functions take input from user

#include <iostream>
#include <cctype>
using namespace std;

int main() {
    string word;
    cout << "Enter a word: ";
    cin >> word;
    for (char &c : word) {
        c = tolower(c);
    }
    cout << word << endl;
    return 0;
}