#include <iostream>
#include <string>
#include <vector> // we need the vector library
using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    cout << v1[1] << endl;
    cout << v1.front() << endl; // outputs first element
    cout << v1.back() << endl; // outputs last element
    cout << v1.size() << endl; // outputs the vector
    v1.push_back(9); // will add 9 as the last element of the vector
    cout << v1.back() << endl;
    v1.pop_back(); // will remove the last element from the vector
    cout << v1.capacity() << endl; // outputs the current capacity of the vector. Not the same as size()
    v1.insert(v1.begin(), 5); // adds the element to the beginning of the vector
    cout << v1[0] <<endl;
    v1.erase(v1.begin()); // will remove the first element of the vector
    cout << v1[0] <<endl;
    for (int i = 0; i < v1.size(); i++) { // will iterate through the vector
        cout << v1[i] << endl;
    }
    
    for (auto itr = v1.begin(); itr != v1.end(); itr++) { // another way to iterate
        cout << *itr <<endl;
    }
}

/*
Vector - A dynamically resizable array. It can change its size.
We don't need to know how big the vector is.
There are more methods for using with a vector than what was shown here
Be careful when adding or removing elements from a vector because the size of the vector may not change to the amount of existing elements and could take up a lot of unnecessary space.
*/