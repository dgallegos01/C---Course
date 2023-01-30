// DISCLAIMER: This part of the tutorial comes from the website: w3schools.com

#include <iostream>
#include <string> 
using namespace std;

// Base class
class Vehicle {
  public:
    string brand = "Ford";
    void honk() {
      cout << "Tuut, tuut! \n" ;
    }
};

// Derived class
class Car: public Vehicle {
  public:
    string model = "Mustang";
};

int main() {
  Car myCar;
  myCar.honk();
  cout << myCar.brand + " " + myCar.model;
  return 0;
}

/*
In C++, it is possible to inherit attributes and methods from one class to another. We group the "inheritance concept" into two categories:
derived class (child) - the class that inherits from another class
base class (parent) - the class being inherited from

To inherit from a class, use the : symbol.

It is useful for code reusability: reuse attributes and methods of an existing class when you create a new class.

Multiple classes can be derived one after the other if needed.
Classes can also Inherite multiple classes at the same time.
*/