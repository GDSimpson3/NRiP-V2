<h1 align='center'>Newton Raphson in C++ - NRiP-V2</h1>

## Overall Concept (Mathematical)

1) Start at X0 that is conceptually not far from the root.
2) Draw it's Tangent and find it's X axis intersection point and call it X1
3) From X1, find it's tangent line and it's X axis intersection and call it X2
4) So on so fourth till it converges to the root

Now it does the same thing programatically with the newton Raphson iteration formula.


Newton-Raphson Iteration formula: `XnPlus1 = Xn - (f(Xn) / f'(Xn))`

<h1 align='center'>Codebase</h1>

Language: `C++`

Development Runtime: `MacOS Arm64`

Framework: `cmake 3.22`



<h1 align='center'>MODULES</h1>

# MainRecursion

I: `vector<vector<string>> polynomial, double xn, int dpAccuracy`

O: `double`

Starts with the first iteration and does the next, it compares if the latest iteration is same (to n d.p.) as the previous one. if not, it does another and keeps on checking


# NewtonRaphsonIteration

I: `vector<vector<string>> polynomial, double xn`

O: `double`

It applies the Newton-Raphson iteration formula to find the next iteration

Formula: `XnPlus1 = Xn - (f(Xn) / f'(Xn))`




# Computing FX

I: `vector<vector<string>> polynomial, double x`

O: `double`

Loop through each term and sum the multiplication of the coefficient with X raised to the terms exponent

# Derivative Calculation

I: `vector<vector<string>> polynomial`

O: `vector<vector<string>>`

It simply conducts a Power rule differentiation with each term. Constants are eriadicated and non existent terms aren't considered




# Input Processing

**Input format**: `7X^6 + 4X^2 - 8X^3 + 3x + 3`

**I**: `Polynomial: string`

**O** `vector<vector<string>>`


Make all the X's Capital and Eradicate all blank spaces VIA Regex

Split through the Operators `['+','-']` into an array
 
`7X^6 + 4X^2 - 8X^3 + 3x + 3` --> `["7X^6", "4X^2", "-8X^3", "3x", "3"]`

Take each term, and split it into coefficient and exponent to leave the computed form

`["7X^6", "4X^2", "-8X^3", "3x", "3"]` --> `[["7","6"], ["4","2"], ["-8","3"], ["3","1"], ["3","0"]]`

Note: Special cases for exponents of 1 and 0
