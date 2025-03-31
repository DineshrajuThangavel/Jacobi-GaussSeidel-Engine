#include <iostream>
#include "Aux_Functions.hpp"
#include "Matrix_Functions.hpp"
#include "Iteration_Methods.hpp"
#include "intro.hpp"

int main() {


    intro();
    int choice;
    int Size;
    int maxiter;
    double tolerance;
    std::cout << "\nInput";
    std::cout << "\nenter the size of vector (n) : ";
    std::cin >> Size;
    std::cout << "enter the Error tolerance value (tol) : ";
    std::cin >> tolerance;
    std::cout << "enter the Max iteration permissible (Maxiter) : ";
    std::cin >> maxiter;
    std::cout << "\nPress 1 to choose Gauss seidel (or) 2 to choose Jacobi \nEnter your Choice: ";
    std::cin >> choice;
    switch (choice){
    case 1 : Gauss_Seidel(Size, tolerance, maxiter);break;
    case 2 : Jacobi(Size, tolerance, maxiter);break;
    default: std::cout << "Not in the list";
    }
    return 0;
}
