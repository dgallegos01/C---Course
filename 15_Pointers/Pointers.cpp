#include <iostream>
#include <string> 
using namespace std;

int main() {
    int x = 2;
    int *y = &x; // You have to put the reference of x (&x) for *y to store the memory address
    cout << x << endl;
    cout << y << endl;
    cout << *y << endl; // this will dereference, meaning that it will return the value stored in the refernced memory location
    
    int x2[] = {1, 2, 3};
    int *head = x2; // will store the memory location of the array
    cout << head << endl;
    for (int i = 0; i < 3; i++) {
        head = x2 + i;
        cout << head << endl; // outputs the memory location of each item in the array
        cout << *head << endl; // outputs the item in the array
    }
    
}

/*
Pointer(*) - a variable that stores the memory address location of some other value or object. (Different from a Reference)
You can have nested pointers.
The memory address of the variable storing a memory address will be different.
Rules:
    A pointer does not need to be initialized or equal to something.
    A pointer can point to a different pointer.
    You can do pointer arithmatic.
    You can redeclare or redefine a pointer.
*/