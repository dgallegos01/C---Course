#include <iostream>
#include <string> 
#include <set> // include the set library
using namespace std;

int main() {
    set<char> s1 = {'C', 'D', 'C', 'D'};

    for (auto itr = s1.begin(); itr != s1.end(); itr++) {
        cout << *itr << endl; // will only output the one instance of C and D because we know it exists so it does not matter how many there are
    }

    cout << "Next Example:" << endl;

    set<char> s2 = {'C', 'D', 'C', 'D'};
    s2.insert('B');
    s2.erase('C');

    if (s2.find('C') == s2.end()) {
        cout << "Could not find 'C'" << endl;
    }

    s2.insert('C');
    if (s2.find('C') == s2.end()) {
        cout << "Could not find 'C'" << endl;
    } else {
        cout << "Found 'C'!" << endl;
    }

    for (auto itr = s2.begin(); itr != s2.end(); itr++) {
        cout << *itr << endl;
    }

    cout << "Next Example:" << endl;

    string test = "This is a test iii jj j hgahs";
    set<char> exists;

    for (int i = 0; i < test.length(); i++) {
        char letter = test[i];
        exists.insert(letter);
    }
    
    for (auto itr = exists.begin(); itr != exists.end(); itr++) {
        cout << *itr << endl; // Remember, it will only output the one instance of the letter or character from the string
    }

    cout << "Next Example:" << endl;
    // this example will use the string 'test' from above
    // we want to see if each "unique" letter in 'find' are also contained in 'test'
    string find = "hello"; 
    set<char> findLetters;

    for (int i = 0; i < find.length(); i++) { // adding each 'find' letter to the set
        char letter = find[i];
        findLetters.insert(letter);
    }

    for (int i = 0; i < test.length(); i++) { // removes all 'test' letters from the set
        char letter = test[i];
        findLetters.erase(letter);
    }

    if (findLetters.size() > 0) {
        cout << "NO! It does not have all letters!" << endl;
    } else {
        cout << "YES! It does!" << endl;
    }

}

/*
Set - a data structure that tells us if an element is present or not. A collection of unique elements.
Can also be described as a type of associative container in which each element has to be unique, because the valuse of the element identifies it.
The order of a set does not matter.

*/