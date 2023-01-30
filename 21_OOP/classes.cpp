// DISCLAIMER: This part of the tutorial comes from the website: w3schools.com

#include <iostream>
#include <string> 
using namespace std;

class MyClass {       // The class
  public:             // Access specifier
    int myNum;        // Attribute (int variable)
    string myString;  // Attribute (string variable)

    void myMethod() {  // Method/function defined inside the class
        cout << "Hello World!" << endl;
    }

    void myMethod2(); // Method/function declaration
};

// Method/function definition outside the class
void MyClass::myMethod2() {
    cout << "Hello World... again!" << endl;
}

// Parameters:
class Car {
  public:
    int speed(int maxSpeed);
};

int Car::speed(int maxSpeed) {
  return maxSpeed;
}

int main() {
    MyClass myObj;  // Create an object of MyClass

    // Access attributes and set values
    myObj.myNum = 15; 
    myObj.myString = "Some text";

    // Print attribute values
    cout << myObj.myNum << endl;
    cout << myObj.myString << endl;

    cout << "Next Example:" << endl;

    myObj.myMethod(); // Call the method
    myObj.myMethod2();

    cout << "Next Example:" << endl;
    Car myObj2; // Create an object of Car
    cout << myObj2.speed(200) << endl; // Call the method with an argument

    return 0;
    
}

/*
C++ is an object-oriented programming language.
Everything in C++ is associated with classes and objects, along with its attributes and methods. For example: in real life, a car is an object. The car has attributes, such as weight and color, and methods, such as drive and brake.
Attributes and methods are basically variables and functions that belongs to the class. These are often referred to as "class members".
A class is a user-defined data type that we can use in our program, and it works as an object constructor, or a "blueprint" for creating objects.

Methods are functions that belongs to the class.
There are two ways to define functions that belongs to a class:
Inside class definition
Outside class definition
In the following example, we define a function inside the class, and we name it "myMethod".
Note: You access methods just like you access attributes; by creating an object of the class and using the dot syntax (.):

To define a function outside the class definition, you have to declare it inside the class and then define it outside of the class. 
This is done by specifiying the name of the class, followed the scope resolution :: operator.
*/