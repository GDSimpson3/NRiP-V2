#include "fxCompute.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

double computeFX(vector<vector<string>> polynomial, double x)
{

    double FXSum = 0;

    for (vector<string> row : polynomial)
    {

        // cout << row.front() << row.back() << "\n";

        // integers

        float Coefficient = stoi(row.front());
        float Exponent = stoi(row.back());
        // Exponent Logic

        double exponentComponent = 1;
        for (int i = Exponent; i > 0; i--)
        {
            exponentComponent *= x;
        }

        // cout << "EXP " << exponentComponent << "\n";

        FXSum += (Coefficient * exponentComponent);
    }

    return FXSum;
}

// REMEMBER TO KEEP ALL THE DATA TYPES AS DOUBLE