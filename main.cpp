/*  Keely Hong, Walter Briones, TJ Bookman
    CPSC 1021-003  
    04/07/2025
    Lab 9
    Main file
*/

#include "accum.h"

int main(){
    vector<int> numbers; // Creates a vector of ints
    vector<string> strings; // Creates a vector of strings
    int num; // Declares an int variable
    int sum; // Decleares an int variable
    string str; // Decleares a string variable
    string concatenatedString; // Decleares a string variable


    cout << "Enter four numbers: "; // Prompts user to enter four numbers
    for (int i = 0; i < 4; i++) { // For loop to store all ints inside of vector
        cin >> num;
        numbers.push_back(num);
    }

    sum = accum(numbers); // Calls the accum template function
    cout << "The sum of the numbers is " << sum << endl; // Displays the sum of the ints

    cout << "Enter four strings: "; // Prompts user to enter four strings
    for (int i = 0; i < 4; i++) { // For loop to store all strings inside of vector
        cin >> str;
        strings.push_back(str);
    }
    concatenatedString = accum(strings); // Calls the accum template function
    cout << "The sum of the strings is " << concatenatedString << endl; // Displays the concatenated strings

    return 0;
}
