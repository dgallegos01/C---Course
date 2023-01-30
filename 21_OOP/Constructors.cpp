// DISCLAIMER: This part of the tutorial comes from the website: w3schools.com

#include <iostream>
#include <string> 
using namespace std;

class Car {        // The class
  public:          // Access specifier
    string brand;  // Attribute (string variable)
    string model;  // Attribute (string variable)
    int year;      // Attribute (integer variable)
    Car(string x, string y, int z); // Constructor declaration
};

// Constructor definition outside the class
Car::Car(string x, string y, int z) {
  brand = x;
  model = y;
  year = z;
}

int main() {
  // Create Car objects and call the constructor with different values
  Car carObj1("BMW", "X5", 1999);
  Car carObj2("Ford", "Mustang", 1969);

  cout << carObj1.brand << " " << carObj1.model << " " << carObj1.year << "\n";
  cout << carObj2.brand << " " << carObj2.model << " " << carObj2.year << "\n";
  return 0;
}

/*
Constructors can also take parameters, which can be useful for setting initial values for attributes.

Just like functions, constructors can also be defined outside the class. 
First, declare the constructor inside the class, and then define it outside of the class by specifying the name of the class, 
followed by the scope resolution :: operator, followed by the name of the constructor.
*/