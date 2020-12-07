/*
Min Wang
Cis 1202 101
3 Nov 2020
*/

#include <iostream>
#include <cctype>
using namespace std;

char character(char start, int offset) {
    if (isalpha(start) == 0) {
        throw std::runtime_error("invalidCharacterExcpeption");
    }

    int ascii = (int)start;
    int target = ascii + offset;
    if (start >= 'A' && start <= 'Z') {
        if (target < 65 || target>90) {
            throw std::runtime_error("invalidRangeException");
        }
    }
    else {
        if (target < 97 || target>122) {
            throw std::runtime_error("invalidRangeException");
        }
    }
    char ch = (char)target;
    return ch;
}
int main()
{
    // this is for testing the character() function

    char ch;
    // ch = character('a', 1);
    // cout<<"ch = " << ch << "\n";

    // ch = character('a', -1);
    // cout << "ch = " << ch << "\n";

    // ch = character('Z', -1);
    // cout<<"ch = " << ch << "\n";

    // ch = character('?', 5);
    // cout<<"ch = " << ch << "\n";

    ch = character('A', 32);
    cout << "ch = " << ch << "\n";
}