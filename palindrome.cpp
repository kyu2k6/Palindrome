//Kevin Yu
//9-12-2022
//Reads in a string and tells you if it is a palindrome

#include <iostream>
#include <vector>
#include <cstring>
#include <ctype.h>


using namespace std;

int main() {
    char str[80]; //creating the first array to store the string
    vector<char> newstr; //creating the second array with the lower case and no punctiations
    cin.get(str, 80); //gets a max of 80 characters
    cin.get(); //removes the extra behind the 80

    int count = 0;
    for (int i = 0; i < strlen(str); i++) {
        if (isalpha(str[i])) {
            newstr.emplace_back(tolower(str[i])); //checks if it is a letter and lower cases it 
        }


        else if (isdigit(str[i])) {
            newstr.emplace_back(str[i]); //checks if it is a number
        }
        else {
	    // rest are ignored
        }
    }
    int size = newstr.size() - 1; 
    bool palindrome = true;

    for (int i = 0; i < size + 1; i++) {
        if (newstr[i] == newstr[size]) { //checks the first and last value and starts to narrow down
	    size--;
        }
        else { //if not the same, loop ends and is not a palindrome
            palindrome = false;
            break;
        }
    }
    if (palindrome == true) {
    	cout << "Palindrome" << endl;
    }
    else {
    	cout << "Not a palindrome" << endl;
    }
    return 0;
}
