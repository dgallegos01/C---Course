#include <iostream>
#include <string> 
using namespace std;

int main() {
    int x = 5; // the variable that sets the size of the array
    int arr[] = {1, 2, 3, 4, 5}; // this is an array for integers
    cout << arr << endl; // this will print out the memory location of the array
    cout << arr[0] << endl; // this will print out the number in the specified index in the array
    arr[0] = 10; // this changes the element in index 0 to be 10
    cout << arr[0] << endl;
    string arr2[] = {"Darius", "is", "great"};
    float arr3[] = {1.1, 1.2, -0.9};
    cout << sizeof(arr)/sizeof(arr[0]); // this prints out the size of the array
    
}

/*
Array - way to store multiple elements in the same variable or memory location.
Arrays are different from lists.
Once an array is defined, the number of elements inside of it CANNOT be increased or decreased.
Side note: you don't necessarily need an equal sign to define an array. ex. int arr[x] {1, 2, 3, 4, 5};
The index of an array starts from 0.
Side note: If we defined an array like this: int arr[5]; and tried adding numbers like this: arr = {1, 2, 3, 4, 5}; it would not be valid.
sizeof() - a compile-time operator that determines the size, in bytes, of a variable or data type. 
It can be used to get the size of classes, structures, unions and any other user defined data type.
*/