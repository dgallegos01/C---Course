#include <iostream>
#include <string> 
using namespace std;

int main() {
    int a = 2;
    int &b = a; // the ampersand is letting b know where a is and is giving access to the variable a
    cout << a << endl;
    cout << b << endl; // will print that same value as a
    a = 3; // a has been updated and so has b. They both now hold 3
    cout << a << endl;
    cout << b << endl;
    b = 4; // this works in vis-versa. Now both hold 4
    cout << a << endl;
    cout << b << endl;
    int c = a; // will only hold the last modified value of a
    cout << c << endl;
    a = 5; // a has been modified but c will remain the same
    cout << a << endl;
    cout << c << endl;

    cout << &a << endl; // will print out the memory location of a
    cout << &b << endl; // will print the same memory address as a

}

/*
A reference(&) - an alias or another name for a variable.
Allows you to modify a variable through its reference or alias.
Alias - a name that refers to a previously defined type.
Side note - the ampersand(&) makes the variable the same as the variable referenced. This is different than a = 2; b = a; because this will only store the value of a.
This concept allows us to be more flexible in our program projects.
You can also make a reference of a reference. i.e. &c = b;
You can do this with any data type.
Rules:
    Every reference must be initialized. i.e. int &a = something;, not int &a;
    You cannot initialize a reference with a NULL value.
    The initialized value must match the declared type of the variable being referenced. i.e. int a = 1; int &b = a, not string &b = a;
    You cannot change what a reference references.
*/