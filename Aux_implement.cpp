// Online C++ compiler to run C++ program online
#include "Aux_Functions.hpp"
#include "Matrix_Functions.hpp"
#include "Iteration_Methods.hpp"

///absolute function
double abs (double a){
    if (a < 0)
    return -1 * a;
    else
    return a;
}
///power function
double power (double num, double exp){
    if (exp == 0)
    return 1;

    else if (exp > 0)
    return num * power(num, exp - 1);

    else
    return 1 / power(num, -exp);
}
///square function
double squareRoot(double x) {
    if (x == 0.0 || x == 1.0) {
        return x;
    }

    double guess = x / 2.0;
    double epsilon = 1e-7; // Tolerance for precision

    while (abs(guess * guess - x) > epsilon) {
        guess = 0.5 * (guess + x / guess);
    }

    return guess;
}
