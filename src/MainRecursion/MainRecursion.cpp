#include "MainRecursion.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#include "newtonRaphsonIteration.hpp"

#define CYAN "\033[36m" /* Cyan */

double RoundHelper(double value, int decimal_places)
{
    double multiplier = pow(10.0, decimal_places);
    return (round(value * multiplier) / multiplier);
}

double MainRecursion(vector<vector<string>> polynomial, double xn, int dpAccuracy)
{

    vector<double> RootIterations = {xn};

    int iterationCount = 0;

    bool KeepGoing = true;

    while (KeepGoing)
    {
        double XnP1 = newtonRaphsonIteration(polynomial, RootIterations.back());
        iterationCount += 1;
        cout << CYAN << "X" << iterationCount << ": " << XnP1 << "\n";

        if (RoundHelper(XnP1, dpAccuracy) == RoundHelper(RootIterations.back(), dpAccuracy))
        {
            KeepGoing = false;
            // RootIterations.push_back(XnP1);
        }
        else
        {
            RootIterations.push_back(XnP1);
        }
    }

    return RootIterations.back();
}