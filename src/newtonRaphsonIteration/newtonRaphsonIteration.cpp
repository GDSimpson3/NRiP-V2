#include "newtonRaphsonIteration.hpp"

#include <iostream>
#include <string>
#include <vector>
#include <cmath>

using namespace std;

#include "fxCompute.hpp"
#include "differentiate.hpp"

int newtonRaphsonIteration(vector<vector<string>> polynomial, int xn)
{

    vector<vector<string>> DerivativeFx = differentiate(polynomial);

    int FXn = computeFX(polynomial, xn);
    int DydxXn = computeFX(DerivativeFx, xn);

    int XnPlus1 = xn - (FXn / DydxXn);

    return XnPlus1;
}