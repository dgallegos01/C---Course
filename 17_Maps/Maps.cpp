#include <iostream>
#include <string> 
#include <map> // you need this library for the following code to work
using namespace std;

int main() {
    map<char, int> mp { // we declare a map with a char value as a key and an int value as the item tied to the key
        {'T', 7},
        {'S', 8}, // this is what a map typically looks like
        {'a', 4}
    };
    cout << mp['S'] << endl; // this is how you call and output a value associated with a key. Its similar to calling an item from an array or tuple
    cout << mp['u'] << endl; // this will output 0, meaning the item or value does not exist
    mp['u'] = 9; // we added 9 with the key 'u' to the map.
    cout << mp['u'] << endl; // now 'u' will hold 9 and will output it.
    mp.insert(pair<char, int>('j', 4)); // here is a more formal way of adding an item with a key to the map
    cout << mp['j'] << endl; //will output 5
    /*
    Here is another way of inserting 'j', 5 to the map:
    pair<char, int> p1('j', 5); this way basically saves a pair to a variable "p1"
    mp.insert(p1)
    cout << p1.first << endl; this would output the first item in the pair 'j'
    cout << p1.second << endl; this would output the second item in the pair '5'
    mp.erase(p1) this would remove the p1 pair from the map
    */
    cout << mp.size() << endl; // will output the number of pairs that are in a map
    for (auto itr = mp.begin(); itr != mp.end(); itr++) { // this will iterate through the map. You can also use map<char, int>::iterator instead of auto
        cout << (*itr).first << endl; // this will print out each key in the map. Keep in mind that there is no order.
        cout << (*itr).second << endl; // this will print out each item in the map
        // you can also use itr->second instead of (*itr).second. This way is called short-hand notation
    }
    mp.clear(); // this will clear everything from the map
    cout << mp.empty() << endl; // this will check if the map is empty. Remember 1 for true, 0 for false. In this case its true that the map is empty
    cout << mp['j'] << endl; // this will now output 0 because the map is now empty
    // Here is an example for using a map:
    string test = "Hello world my name is Darrius! ttthhaaa";

    map<char, int> freq;

    for (int i = 0; i < test.length(); i++) {
        char letter = test[i];
        // cout << letter << endl; // this will output each character in the string 'test'
        if (freq.find(letter) == freq.end()) { // this will add each item in the string and assign it a key
            freq[letter] = 0;
        }
        freq[letter]++; //  this increments the number so each key is uneque
        cout << freq[letter] << ", " << letter << endl;
    }
    
    for (auto itr = freq.begin(); itr != freq.end(); itr++) { // here, we are iterating through the map
        cout << itr->first << ": " << itr->second << endl; // this tells us how many of the same letter we have from the string
    }

}

/*
Map - a data structure that allows you to associate a unique key with a data value.
all of the elements in a map are acually pairs.

*/