#include <iostream>
#include <string> 
using namespace std;

int main() {
    /*
    ! - not Operator, !false -> true, !true -> false
    && - AND
    || - OR
    */
    bool x = !(1 < 2); // outputs 0
    bool y = true && true; // outputs 1
    bool z = true || false; // outputs 1

    // exercise:
    bool test = !(false && true); // outputs 1
    bool test2 = (!false || true); // outputs 1
    
}

/*
Logical Operators - used to combine two or more conditions/constraints or to complement the evaluation of the original condition in consideration.

*/