
#include <iostream>

#include "startup.hpp"
using namespace std;

void welcomeMessage() {
    cout << R"(
    Welcome to NRiP-V1
    
    This tool is an implementation of the Newton Raphson Method for Finding roots VIA Iteration formulae

    There are some exceptions as per the Newton Raphson:
    - It will diverge if you try a point where f(x) has a shallow gradient
    - The point musnt go to a stationary point
    - NO complex roots please

    Runtime: C++ (Cmake VERSION 3.22)

    NOTE: ONLY FOR POLYNOMIALS, NOT OTHER TYPES OF FUNCTIONS AS I HAVENT MADE THE DERRIVATIVE CALCULATOR READY FOR THAT

    Write polynomials in this form:

        1X^3 - 3X + 5
        coefficientX^exponent

    And with That, A теперь наслаждайтесь!
)"<< std::endl;
}
