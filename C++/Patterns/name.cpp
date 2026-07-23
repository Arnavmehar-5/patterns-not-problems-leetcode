/*
 * Star Pattern Name Printer - C++ Version
 * Prints any name using * and spaces as ASCII block letters (5 rows x 5 cols per char)
 */

#include <iostream>
#include <string>
#include <cctype>
using namespace std;

/* Each letter: 5 rows, each row is a 5-character string of '*' and ' ' */
const string letters[26][5] = {
    /* A */ {" *** ", "*   *", "*****", "*   *", "*   *"},
    /* B */ {"**** ", "*   *", "**** ", "*   *", "**** "},
    /* C */ {" ****", "*    ", "*    ", "*    ", " ****"},
    /* D */ {"**** ", "*   *", "*   *", "*   *", "**** "},
    /* E */ {"*****", "*    ", "***  ", "*    ", "*****"},
    /* F */ {"*****", "*    ", "***  ", "*    ", "*    "},
    /* G */ {" ****", "*    ", "*  **", "*   *", " ****"},
    /* H */ {"*   *", "*   *", "*****", "*   *", "*   *"},
    /* I */ {"*****", "  *  ", "  *  ", "  *  ", "*****"},
    /* J */ {"*****", "   * ", "   * ", "*  * ", " **  "},
    /* K */ {"*   *", "*  * ", "***  ", "*  * ", "*   *"},
    /* L */ {"*    ", "*    ", "*    ", "*    ", "*****"},
    /* M */ {"*   *", "** **", "* * *", "*   *", "*   *"},
    /* N */ {"*   *", "**  *", "* * *", "*  **", "*   *"},
    /* O */ {" *** ", "*   *", "*   *", "*   *", " *** "},
    /* P */ {"**** ", "*   *", "**** ", "*    ", "*    "},
    /* Q */ {" *** ", "*   *", "* * *", "*  **", " ****"},
    /* R */ {"**** ", "*   *", "**** ", "*  * ", "*   *"},
    /* S */ {" ****", "*    ", " *** ", "    *", "**** "},
    /* T */ {"*****", "  *  ", "  *  ", "  *  ", "  *  "},
    /* U */ {"*   *", "*   *", "*   *", "*   *", " *** "},
    /* V */ {"*   *", "*   *", "*   *", " * * ", "  *  "},
    /* W */ {"*   *", "*   *", "* * *", "** **", "*   *"},
    /* X */ {"*   *", " * * ", "  *  ", " * * ", "*   *"},
    /* Y */ {"*   *", " * * ", "  *  ", "  *  ", "  *  "},
    /* Z */ {"*****", "   * ", "  *  ", " *   ", "*****"}
};

void printStarName(const string &name) {
    for (int row = 0; row < 5; row++) {
        for (char ch : name) {
            char c = toupper((unsigned char)ch);

            if (c == ' ') {
                cout << "       ";   // gap between words
            } else if (c >= 'A' && c <= 'Z') {
                cout << letters[c - 'A'][row] << "  ";
            }
            // Non-alphabetic characters are silently skipped
        }
        cout << "\n";
    }
}

int main() {
    string name;

    cout << "╔══════════════════════════════╗\n";
    cout << "║   Star Pattern Name Printer  ║\n";
    cout << "╚══════════════════════════════╝\n";
    cout << "\nEnter your name: ";
    getline(cin, name);

    cout << "\n";
    printStarName(name);
    cout << "\n";

    return 0;
}