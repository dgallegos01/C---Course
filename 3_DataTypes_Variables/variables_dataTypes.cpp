#include <iostream>
#include <string> // needed to create a string variable
using namespace std;

int main() {
    // Data Types:
    /*
    int - integer
    float - any number with a desimal
    bool - true or false (always lowercase)
    string - anything inside double quotation marks
    char - a single character inside single quotation marks
    */
   // Variables:
   int x = 2; // we define x being equal to the value 2. If you try to put a decimal value in int, it will chop off the decimal point. ex. 4.7 --> 4
   string name = "Darius";
   int z; // defining a variable without assineing a value to it
   cout << x << endl;
   cout << name;
}

/*
THIS IS A MULTILINE COMMENT!
*/
// Always give your variable meaningful and recognizable names
// There are two ways to write multi-word variables. First one is called camel case (nameOfUser) then there is snake case (name_of_user)
// Traditionally in C++ its standard to use camel case
// you can redefine variables as long as they are the same type