#include <iostream>
#include <string> 
using namespace std;

int main() {
    // ex. 1
    int x = 6;
    if (x < 7) {
        cout << "x is less than 7" << endl;
    }
    // ex. 2
    int x2;
    cin >> x2;
    if (x2 == 10) {
        cout << "This is my favorite number" << endl;
    } else if (x2 < 5) {
        cout << "x is less than 5" << endl;
    } else {
        cout << "This is NOT my favorite number"; << endl;
    }
    
}

/*
Remember that else if will execute if the initial if statement is false
*/