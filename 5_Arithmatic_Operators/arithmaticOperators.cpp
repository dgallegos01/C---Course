#include <iostream>
#include <string> 
using namespace std;

int main() {
    /*
    + - Add
    - - minus
    / - Division
    * - Multiplication
    % - modulator
    ++ - Increment
    -- - Decrement
    */
    int x = 8;
    int y = 9;
    int sum = x + y;
    int sum2 = x - y;
    int sum3 = x / y; // becuase this is an int, the result is rounded. changing the type of sum3 would not change the outcome. if either x or y had a different type, then it would change
    int sum4 = x * y;
    int sum5 = x % y; // foats do not work with this operator and the types must be the same
    cout << sum << endl;
    cout << sum2 << endl;
    cout << sum3 << endl;
    cout << sum4 << endl;
    cout << sum5 << endl;

    float x1 = 8;
    x1 += 2; // will add 2
    cout << x1 << endl;
    x1 -= 2; // will substract 2
    cout << x1 << endl;
    x1++; // will increment 1
    cout << x1 << endl;
    x1--; // will decrement 1
    cout << x1 << endl;

    // Order of operations:
    float x2 = 8;
    int y2 = 4;
    int sum6 = (x2 + y2) - x2 * 7 / 3 * 2;
    cout << sum6 << endl;

}

/*
Operators - a symbol that tells the compiler to perform specific mathematical or logical manipulations
*/