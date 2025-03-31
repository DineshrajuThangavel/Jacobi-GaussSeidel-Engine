#include "Aux_Functions.hpp"
#include "Matrix_Functions.hpp"
#include "Iteration_Methods.hpp"

///matrix A function
double A (double i, double j){
    double exponent = 1;
    double Final = 1;
    if (i == j)
    return 1;
    else{
    double temp = abs (i-j);
    if (temp > 10)
        return 0;
    for(int i = 1; i<=temp; i++){
        exponent = exponent * 2;
    }
    for(int i = 1; i<=exponent; i++){
        Final = Final * 0.5;
    }
    return Final;
    }
}
