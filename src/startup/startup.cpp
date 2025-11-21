
#include <iostream>

#include "startup.hpp"
using namespace std;

// Source - https://stackoverflow.com/a/9158263
// Posted by shuttle87, modified by community. See post 'Timeline' for change history
// Retrieved 2025-11-21, License - CC BY-SA 4.0

// the following are UBUNTU/LINUX, and MacOS ONLY terminal color codes.
#define RESET "\033[0m"
#define BLACK "\033[30m"              /* Black */
#define RED "\033[31m"                /* Red */
#define GREEN "\033[32m"              /* Green */
#define YELLOW "\033[33m"             /* Yellow */
#define BLUE "\033[34m"               /* Blue */
#define MAGENTA "\033[35m"            /* Magenta */
#define CYAN "\033[36m"               /* Cyan */
#define WHITE "\033[37m"              /* White */

void welcomeMessage()
{

    cout << YELLOW << R"(
    Welcome to NRiP-V2
    
    This tool is an implementation of the Newton Raphson Method for Finding roots VIA Iteration formulae
    )" << std::endl;

    cout << RED << R"(
    There are some exceptions as per the Newton Raphson:
    - It will diverge if you try a point where f(x) has a shallow gradient
    - The point musnt go to a stationary point
    - NO complex roots please
    )" << std::endl;

    cout << CYAN << R"(
    Runtime: C++ (Cmake VERSION 3.22)
    )" << std::endl;

    cout << RED << R"(
    NOTE: ONLY FOR POLYNOMIALS, NOT OTHER TYPES OF FUNCTIONS AS I HAVENT MADE THE DERRIVATIVE CALCULATOR READY FOR THAT
    )" << std::endl;

    cout << GREEN << R"(
    Write polynomials in this form:

        1X^3 - 2X - 5
        coefficientX^exponent
   )" << std::endl;

    cout << YELLOW << R"(
    And with That, A теперь наслаждайтесь!
    )" << std::endl;
}
