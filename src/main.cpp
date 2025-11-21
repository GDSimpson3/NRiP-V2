
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "startup.hpp"
#include "inputProcessor.hpp"
#include "fxCompute.hpp"
#include "differentiate.hpp"
#include "newtonRaphsonIteration.hpp"
#include "MainRecursion.hpp"

// NOTE: I KNOW I WON'T KNOW A THING ABT THIS PROGRAM IN 3 WEEKS TIME, HENCE I'VE ADDED A SHITLOAD OF ANNOTATIONS THROUGHT IT

#define GREEN "\033[32m" /* Green */
#define YELLOW "\033[33m" /* Yellow */

int main()
{

    welcomeMessage();

    vector<vector<string>> inputProcessed = inputProcessor();

    cout << GREEN << "Processed Terms in vector<vector<string>> Form:\n";
    for (vector<string> row : inputProcessed)
    {
        cout << "[ ";
        for (string cell : row)
        {
            cout << "\"" << cell << "\" ";
        }
        cout << "]\n";
    }

    cout << YELLOW;

    string StartingPoint;
    cout << "\nGive a starting point for the Newton Raphson iterator: ";
    getline(cin, StartingPoint);

    string decimalPlacesTo;
    cout << "\nTo How many decimal places do you want this root?: ";
    getline(cin, decimalPlacesTo);

    double StartingPointFloat = stoi(StartingPoint);
    int DecimalPlacesFloat = stoi(decimalPlacesTo);

    // int FX = computeFX(inputProcessed, 3);

    // cout << FX;

    // cout << "Terms:\n";
    // for (vector<string> row : inputProcessed)
    // {
    //     cout << "[ ";
    //     for (string cell : row)
    //     {
    //         cout << "\"" << cell << "\" ";
    //     }
    //     cout << "]\n";
    // }

    // vector<vector<string>> firstDerivative = differentiate(inputProcessed);

    // cout << "Terms:\n";
    // for (vector<string> row : firstDerivative)
    // {
    //     cout << "[ ";
    //     for (string cell : row)
    //     {
    //         cout << "\"" << cell << "\" ";
    //     }
    //     cout << "]\n";
    // }

    // float iterationOne = newtonRaphsonIteration(inputProcessed, 12.0);

    double MainRecursionRoot = MainRecursion(inputProcessed, StartingPointFloat, DecimalPlacesFloat);

    cout << GREEN << "\nAnd The root convereged To: " << MainRecursionRoot << "\nThanks!";

    return 0;
}

// x^3−2^x−5 -- 1x^3 -2x - 5
// 2
// 5