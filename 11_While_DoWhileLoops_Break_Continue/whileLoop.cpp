#include <iostream>
#include <string> 
using namespace std;

int main() {
    // ex. 1, simulating a for loop:
    int i = 0;
    while(i < 10) {
        cout << i << endl;
        i++;
    }
    // ex. 2, practical use:
    int input;
    while (input != 1 && input != 2) {
        cout << "Type the number 1 or 2: ";
        cin >> input;
    }
    // ex. 3, using break:
    int input2 = -1;
    while (true) {
        cout << "Type the number 1 or 2: ";
        cin >> input2;
        if (input2 == 1 || input2 == 2) {
            break; // will end the while loop no matter what!
        }
    }
    // ex. 4, using continue:
    for (int i = 0; i < 10; i++) {
        if (i == 9 || i == 7) {
            continue; // when this condition is met, anything after will be skipped
            // 7 and 9 are skipped
        }
        cout << i << endl;
    }
    // ex. 5, using "do while":
    int x = 10;
    int add;
    cout << "Type a number to add to x: ";
    cin >> add;
    x += add;
    cout << "x is: " << x << endl;
    while (x < 10) {
        cout << "Type a number to add to x: ";
        cin >> add;
        x += add;
        cout << "x is: " << x << endl;
    } // inefficiant! Now lets use do while:
    do {
    int add;
    cout << "Type a number to add to x: ";
    cin >> add;
    x += add;
    cout << "x is: " << x << endl;
    } while (x < 10); // the same as above but more efficiant
    
    
}

/*
While loops will only loop if its condition is true
*/