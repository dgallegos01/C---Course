#include <iostream> // include takes a library of code and tells the compiler that it needs this for our program to run
// iostream(input output stream) this allows us to get input from the console or output to the console

using namespace std; // namespace is a collection of code inside iostream. std(Standard) is used as a reference for cout

int main() { // we are making a function called main. In every C++ program we must define a main function so we can execute code
    cout << "Hello World!"; // cout(character output) outputs characters to the screen
    return 0; // Because this funtions has the type int, we have to return an integer. Its used in almost every function.
}

/*
at the end of every line of code, you need a terminator which is a semicolon (;)
because of this, we can write our code in any formate that we want. ex. int main() {cout << "Hello World!";return 0;}
if you are printing multiple lines of characters or words to the console, you need to put \n (newLine) at the end of each print method. ex. cout << "Hello World!\n";
you can also use endl (the same as \n) as a cleaner alternative. ex. cout << "Hello World!" << endl;
*/