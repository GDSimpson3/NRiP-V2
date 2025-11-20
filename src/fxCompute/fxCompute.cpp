#include "fxCompute.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

int computeFX(vector<vector<string>> polynomial, int x)
{

    int FXSum = 0;

    for (vector<string> row : polynomial)
    {
       
        cout << row.front() << row.back() << "\n";


        // integers

        int Coefficient = stoi(row.front());
        int Exponent = stoi(row.back());
        // Exponent Logic

        int exponentComponent = 1;
        for (int i = Exponent; i > 0; i--)
        {
            exponentComponent *= x;
        }

        cout << "EXP " << exponentComponent << "\n";

        FXSum += (Coefficient*exponentComponent);
        
    }

    return FXSum;
}