#include "inputProcessor.hpp"

#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<vector<string>> inputProcessor()
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

    vector<vector<string>> terms = {};
    string term = "";

    int splitIndex = 0;

    for (int i = 0; i <= (rawPolyNomial.size() - 1); i++)
    { // remember its array count hence -1 & <=

        if (rawPolyNomial[i] != ' ')
        { // remove all white spaces

            cout << rawPolyNomial[i] << "THE TERMMM \n";

            if (i == rawPolyNomial.size() - 1)
            {
                term += rawPolyNomial[i];
            }

            if (i != 0)
            { // don't check sign if it's the first term

                if (rawPolyNomial[i] == '+' || rawPolyNomial[i] == '-' || i == rawPolyNomial.size() - 1)
                {

                    // now handle the term logic, turn -5X^2 into [-5,2]

                    string coefficient = "";
                    string exponent = "";

                    coefficient += term[0];

                    splitIndex = term.size();

                    for (int q = 1; q <= term.size() - 1; q++)
                    {                                                           // q = 1, because we take care of
                        if (term[q] == 'x' || term[q] == 'X' || term[q] == '^') // split if it's an X, or a ^ (the X or raised to)
                        {
                            splitIndex = q;

                            if (q == term.size() - 1)
                            {
                                exponent += "1";
                                // assume it's 3X, so if we're at the end of the term,
                                // and the final character of the term is X, that means its an X ^ 1 term
                                // hence gotta add 1 as the exponent
                            }
                        }
                        else if (q == term.size() - 1 && splitIndex == term.size())
                        {
                            exponent += "0";
                            // assume it's +5, so if we're at the end of the term,
                            // and the final character of the term is NOT X, Nor has X passed, that means its an X ^ 0 term
                            // hence gotta add 0 as the exponent
                        }

                        if (q < splitIndex)
                        {
                            // We're before the X or ^, hence this is the coefficient bit of the term
                            coefficient += term[q];
                        }
                        else if (q > splitIndex)
                        {
                            // We're after it now, hence it's the exponent bit of the term
                            exponent += term[q];
                        }
                    }
                    splitIndex = 0; // reset the split index for the next term

                    vector<string> termExtracted = {coefficient, exponent}; // pushing [coefficient,exponent]
                    terms.push_back(termExtracted);

                    // cout << term << "ASDF \n";

                    term = "";                // clear term
                    term += rawPolyNomial[i]; // add character (+ or -) as it all got triggered by the Next terms sign
                }
                else
                {
                    term += rawPolyNomial[i]; // if we haven't hit le operator, then just add char to the term
                }
            }
            else
            {
                term += rawPolyNomial[i]; // don't forget the first son of a....
            }
        }
    };

    return terms;
}
