#include <iostream>
#include <string> 
using namespace std;

int main() {
    const int gravity = -9.8; // constant variable(read-only value)
    int n;
    cin >> n; // cout uses "<<", cin uses ">>"
    cout << n << endl;
    // cout << cin.fail(); // If user input is invalid, this statement (cin.fail()) will catch it. It will output 1(true) or 0(false). 1 being the error
    cin.clear(); // clears the failure from our console input stream
    cin.ignore(1000, '\n'); // ignores the error and moves to the next line. 1000 means it can clear up to that many variables (it can be larger). 
}

/*
Constant Variable - a memory location where a value can be stored. Unlike variables, constants never change in value.
You CANNOT define a constant variable without giving it a value.
cin - an object of class iostream. used for user input.
>> - stream-extraction operator
*/