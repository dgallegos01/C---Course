#include <iostream>
#include <string> 
using namespace std;

int main() {
    int x[] = {5,3,6,8,2,6,212,645,86,21};
    for (int i = 0; i < sizeof(x)/sizeof(x[0]); i++) {
        cout << x[i] << endl;
    }
    // ex. 1
    cout << "ex. 1" << endl;
    int x2[5];
    for (int i = 0; i < sizeof(x2)/sizeof(x2[0]); i++) {
        x2[i] = i;
    }
    for (int i = 0; i < sizeof(x2)/sizeof(x2[0]); i++) {
        cout << x2[i] << endl;
    }
    
}

/*

*/