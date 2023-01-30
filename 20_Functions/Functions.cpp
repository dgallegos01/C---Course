#include <iostream>
#include <string> 
using namespace std;

int add(int x, int y) { // we make a function 'add' with the parameters x and y
    return x + y; // this returns the sum of x and y when the function is called
}

getNumber() { // this a function without parameters
    return 6; // everytime this function is called, the output will always be 6
}

void test() { // this fuction deos not need a return statement because of the type 'void'
    for (int i = 0; i < 10; i++) {
        cout << i << endl;
        // you will get an error if you do put a return statement on a void function
    }
}

void print(string text) {
    cout << text << endl;
}

void printNTimes(int n, string text) {
    for (int i = 0; i < n; i++) {
        cout << text << endl;
        print(text); // this is frome the function 'print' above
    }
}

// default parameters:
int doMath(int x, int y, int z = 1) { // the parameter z is defaulted to being 1
    return (x + y) * z;
}

pair<int, int> makePair(int x, int y) { // making a function that uses the data type 'pair'. You can do this any data type
    if (x > y) { // depending on what arguments you put in the function, one return statement will be omitted
        return pair<int, int>(x, y);
    }
    return pair<int, int>(x, y);
}

void swap(int &x, int &y) { // using references, passed the reference of the arguements to actually swap the values
    int temp = x;
    x = y;
    y = temp;
}

void swap2(int *x, int *y) { // same idea but now using pointers
    int temp = *x;
    *x = *y;
    *y = temp;
    // In a real world scenario, it would make more sense to just stick with references instead of pointers in functions
}

int main() { // remember that 'main' is also a function
    int result = add(2, 3); // we call the function and save it to the variable 'result' and give it the parameters 2 and 3
    cout << result << endl; // output will be 5

    cout << "Next Example:" << endl;

    int result2 = getNumber();
    cout << result2 << endl; // output will be 6

    cout << "Next Example:" << endl;

    test();

    cout << "Next Example:" << endl;

    printNTimes(5, "Darius");
    printNTimes(7, "is great!");

    cout << "Next Example:" << endl;

    cout << doMath(3, 4) << endl; // when we call the function 'doMath' we don't need to put a third arguement for z. We can if we want to though
    // output will be 7

    cout << "Next Example:" << endl;

    cout << makePair(2, 3).first << endl;
    cout << makePair(2, 3).second << endl;

    cout << "Next Example:" << endl;

    int a = 2;
    int b = 4;
    cout << a << endl;
    cout << b << endl;
    cout << "Swapping a and b" << endl;
    swap(a, b);
    cout << a << endl;
    cout << b << endl;

    cout << "Next Example:" << endl;
    // this example does the same thing as the last example but with pointers instead of references
    int a2 = 6;
    int b2 = 8;
    cout << a2 << endl;
    cout << b2 << endl;
    cout << "Swapping a and b" << endl;
    swap2(&a2, &b2);
    cout << a2 << endl;
    cout << b2 << endl;
}

/*
Function - a group of statements that together perform a task.
A function declaration tells the compiler about a function's name, return type, and perameters.
Functions are reusable.
There could only be one return statement per function. Any additionals will be ignored.
Any function with an 'int' type MUST have a return statement.
Functions are made to elimanate redundancy.
*/