#include "differentiate.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

vector<vector<string>> differentiate(vector<vector<string>> polynomial)
{

    vector<vector<string>> derivativeOut = {};

    for (vector<string> row : polynomial)
    {

        vector<string> newTerm = {};

        int Coefficient = stoi(row.front());
        int Exponent = stoi(row.back());

        if (Exponent > 0)
        {
            int CoefficientDerivated = Coefficient * Exponent;
            int ExponentDerivated = Exponent - 1;

            newTerm.push_back(to_string(CoefficientDerivated));
            newTerm.push_back(to_string(ExponentDerivated));

            derivativeOut.push_back(newTerm);

        } // else we should make it dissapear, as it'll be a constant
    }

    return derivativeOut;
}