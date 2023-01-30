#include <iostream>
#include <string> 
using namespace std;

int main() {
    int x = 0;
    switch (x) { // if the statement is equal to the number of a case, then that case will execute
        case 1:
            cout << "cool";
            break; // its good practice to break at the end of a case
        case 2:
            cout <<"not cool";
            break;
        case 10:
            cout << "interesting";
            break;
        default: // the default case if the switch statement does not equal a case... similar to an else statement
            cout << "default";
    }
    
}

/*
The switch statement is a more elegant when comparing values as apposed to am if statement.
*/