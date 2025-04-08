/*  Keely Hong, Walter Briones, TJ Bookman
    CPSC 1021-003  
    04/07/2025
    Lab 9
    Implementation of template file
*/

#ifndef ACCUM_H
#define ACCUM_H

#include <vector>
#include <string>
#include <iostream>

using namespace std;

template <typename T> // Template function to add all ints
T accum(vector<T> v){
    T total = T(); // Initializes total to the default value of T

    for (size_t i = 0; i < v.size(); i++){ // For loop to add all the ints
        total = total + v[i];
    }
    return total; // Returns sum
}

template <>
string accum(vector<string> v) {
    string result; // Initializes result to an empty string
    
    for (size_t i = 0; i < v.size(); i++) { // For lop to concatenate all the strings
        result = result + v[i];
        if (i < v.size() - 1) {
            result = result + ", "; // Adds a comma and space between strings
        }
    }
    
    return result; // Returns concatenated string
}

#endif