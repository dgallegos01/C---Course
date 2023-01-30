// DISCLAIMER: This part of the tutorial comes from the website: w3schools.com

#include <iostream>
#include <string> 
using namespace std;

class MyClass {
  public:    // Public access specifier
    int x;   // Public attribute
  private:   // Private access specifier
    int y;   // Private attribute
};

int main() {
  MyClass myObj;
  myObj.x = 25;  // Allowed because it is public
  // myObj.y = 50;  // Not allowed because it is private (will give an error)
  return 0;
}

/*
The public keyword is an access specifier. Access specifiers define how the members (attributes and methods) of a class can be accessed. 

There are three access specifiers:
public - members are accessible from outside the class
private - members cannot be accessed (or viewed) from outside the class
protected - members cannot be accessed from outside the class, however, they can be accessed in inherited classes. You will learn more about Inheritance later.

Note: It is possible to access private members of a class using a public method inside the same class through encapsulation.

Tip: It is considered good practice to declare your class attributes as private as often as possible. This will reduce the possibility of yourself or others to mess up the code.
*/