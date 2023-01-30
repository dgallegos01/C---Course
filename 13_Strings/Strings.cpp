#include <iostream>
#include <string> 
using namespace std;

int main() {
    string str = "hello world!";
    cout << str[1] << endl; // will pring out the string position, in this cas "e"
    str[1] = '2'; // will change to position of the placeholder to the character specified. Remember that characters are single quote.
    cout << str[1] << endl;
    cout << str.size() << endl; // will print out the size or length of the string. You can also use .length() as well. They are the same
    
    for (int i = 0; i < str.length(); i++) {
        char chr = str[i]; // will store each item in the char variable. Cannot be another string!
        cout << chr << endl; // will print out each item in the string
    }
}

/*
Side note - when replacing a positioned item in a string, that item could only be changed with a character(char) not a string.
*/