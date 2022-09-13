#include <iostream>
#include <vector>
#include <cstring>
#include <ctype.h>


using namespace std;

int main() {
    char str[80];
    vector<char> newstr;
    cin.get(str, 80);
    cin.get();

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            newstr.emplace_back(tolower(str[i]));
        }


        else if (isdigit(str[i])) {
            newstr.emplace_back(str[i]);
        }
        else {

        }
    }
    int size = newstr.size() - 1;
    bool palindrome = true;

    for (int i = 0; i < size + 1; i++) {
        if (newstr[i] == newstr[size]) {
            continue;
            size--;
        }
        else {
            palindrome = false;
            break;
        }
    }
    cout << boolalpha;
    return 0;
}
