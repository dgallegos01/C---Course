#include <iostream>
#include <string> 
using namespace std;

int main() {
    /*
    Comparison Operators:
    <
    >
    <=
    >=
    !=
    ==
    */
    bool test = 1 > 2;
    cout << test << endl; // will output 0. Remember that true = 1 and false = 0.
    bool test2 = 1 > 1; // false
    bool test3 = 1 >= 1; // true
    bool test4 = 1 == 1; // true
    bool test5 = 1 != 1; // false
    bool test6 = 1 != 2; // true
    bool test7 = 'a' == 'A'; // outputs 0. unppercases letters are different than lowercase characters.
    bool test8 = 'a' < 'b'; // outputs 1. This is Lexicographical. It also follows ASCII. From the table, a is 97 and b is 98.
    bool test9 = 'a' < 'B'; // outputs 0. B has an ASCII value of 66.
    bool test10 = 'A' < 'B'; // outputs 1.
    bool test11 = "hello" == "hEllo"; // outputs 0. e is capitalized therefore they do not match. Characters have to be the exact same!
    bool test12 = "hello" != "hello"; // outputs 0. They are the same.

    // excercise:
    int num1, num2;
    cout << "Type a number: ";
    cin >> num1;
    cout << "Type a number: ";
    cin >> num2;
    cout << "These two number are the same: " << (num1 == num2);
    
}

/*
Will always return true or false.
The result may not be intuitive.
Remember that "=" is an assignment operator.
Remember that one character uses single quotation markes '' and multiple characters use double quotation marks "".
Lexicographical - a generalization of the alphabetical order of the dictionaries to sequences of ordered symbols or, more generally, of the elements of a totally ordered set.
ASCII - (American Standard Code) a character coding standard for electronic communication.
Remember that a space " " is also a character.
*/