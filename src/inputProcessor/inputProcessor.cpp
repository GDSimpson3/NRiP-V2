#include "inputProcessor.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

void inputProcessor()
{

    string rawPolyNomial;
    cout << "Please Enter the Polynomial: "; // Type a number and press enter
    // cin >> rawPolyNomial; // Get user input from the keyboard
    getline(cin, rawPolyNomial);
    cout << "RAW POLYNOMIAL: " << rawPolyNomial << "\n"; // Display the input value

    // A list is similar to a vector in that it can store multiple elements of the same type and dynamically grow in size.
    // However, two major differences between lists and vectors are:
    // You can add and remove elements from both the beginning and at the end of a list,
    // while vectors are generally optimized for adding and removing at the end.
    // Unlike vectors, a list does not support random access,
    // meaning you cannot directly jump to a specific index, or access elements by index numbers.
    //             - W3Schools

    // we prob should use a vector, as u cant access random items in a list
    // can loop through both

    vector<string> terms = {};
    string term = "";

    for (int i = 0; i <= (rawPolyNomial.size() - 1); i++)
    { // remember its array count hence -1 & <=

        

        if (rawPolyNomial[i] != ' ')
        { // remove all white spaces

            if (i != 0)
            { // don't check sign if it's the first term

                if (rawPolyNomial[i] == '+' || rawPolyNomial[i] == '-')
                {
                    cout << term << "ASDF \n";

                    terms.push_back(term);
                    term = "";
                    term += rawPolyNomial[i];
                } else{
                    term += rawPolyNomial[i];

                }




            } else {
                term += rawPolyNomial[i];
            }
        }
    };
}
