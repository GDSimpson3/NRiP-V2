
#include <iostream>
#include <string>
#include <vector>

using namespace std;

#include "startup.hpp"
#include "inputProcessor.hpp"

// NOTE: I KNOW I WON'T KNOW A THING ABT THIS PROGRAM IN 3 WEEKS TIME, HENCE I'VE ADDED A SHITLOAD OF ANNOTATIONS THROUGHT IT

int main() {

    welcomeMessage();

    vector<vector<string>> inputProcessed = inputProcessor();

    cout << "Terms:\n";
    for (vector<string> row : inputProcessed)
    {
        cout << "[ ";
        for (string cell : row)
        {
            cout << "\"" << cell << "\" ";
        }
        cout << "]\n";
    }

    return 0;
}