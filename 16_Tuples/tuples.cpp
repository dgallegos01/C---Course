#include <iostream>
#include <string>
#include <tuple> // You need this library to use tuples
using namespace std;

int main() {
    tuple <int, string> person(20, "Darrius"); // Creating the tuble and declaring the type if each item inside <>. You can have as many as you want
    cout << get<0>(person) << endl; // this is how you print the index of a tuple item. the index number goes inside <>
    cout << get<1>(person) << endl;
    get<1>(person) = "Tim"; // You can change an item in a tuple like this
    cout << get<1>(person) << endl; // will output the new string
    // example 1
    tuple <int, char, bool, float> thing; // you can create a tuple without having to initialize/assign values
    thing = make_tuple(23, 'H', true, 24.3); // another way to add values to a declared tuple
    cout << get<0>(thing) << endl;
    cout << get<1>(thing) << endl;
    cout << get<2>(thing) << endl;
    cout << get<3>(thing) << endl;
    // example 2
    tuple <int, int> t1 = make_tuple(1, 2);
    tuple <int, int> t2 = make_tuple(3, 4);
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;
    t1.swap(t2); // this will swap the values to the other tuple and vise versa. Both tuples NEED to have the same number of the same type
    cout << get<0>(t1) << endl;
    cout << get<1>(t1) << endl;
    cout << get<0>(t2) << endl;
    cout << get<1>(t2) << endl;
    // example 3
    tuple <int, int> t3 = make_tuple(4, 5);
    int x, y;
    tie(x, y) = t3; // this will make x equal to 4 and y equal to 5 (It goes in order). Make sure the types match!
    cout << x << endl;
    cout << y << endl;
    cout << get<0>(t3) << endl;
    cout << get<1>(t3) << endl;
    // example 4
    tuple <int, char> t4(20, 'T');
    tuple <char, string> t5('R', "Hello World");
    tuple <int, char, char, string> t6 = tuple_cat(t4, t5); // this will combine or concantinate both tuples into one tuple. Again, make sure the types match!
    cout << get<0>(t6) << endl;
    cout << get<1>(t6) << endl;
    cout << get<2>(t6) << endl;
    cout << get<3>(t6) << endl;
    auto t7 = tuple_cat(t4, t5); // auto will auto-complete the types needed for the combined tuples so they do not have to be remembered
    cout << get<0>(t7) << endl;
    cout << get<1>(t7) << endl;
    cout << get<2>(t7) << endl;
    cout << get<3>(t7) << endl;

}

/*
If you declare a tuple with the amount of types without initializing values, the outputs would be 0 as a placeholder.
Be careful using the "auto" method in complex coding as this may throw you off when debugging later on. Better to know what the type are.
*/