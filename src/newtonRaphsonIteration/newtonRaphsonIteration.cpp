#include "newtonRaphsonIteration.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#include "fxCompute.hpp"
#include "differentiate.hpp"

double newtonRaphsonIteration(vector<vector<string>> polynomial, double xn)
{

    vector<vector<string>> DerivativeFx = differentiate(polynomial);

    double FXn = computeFX(polynomial, xn);
    double DydxXn = computeFX(DerivativeFx, xn);

    double XnPlus1 = xn - (FXn / DydxXn);

    return XnPlus1;
}