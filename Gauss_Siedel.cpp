#include <iostream>
#include "Aux_Functions.hpp"
#include "Matrix_Functions.hpp"
#include "Iteration_Methods.hpp"

int Gauss_Seidel(int n, double tol, int maxiter) {
    double x[n];
    double b[n];
    double b1[n];
    double y[n];
    double error;
    int Count = 0;

    std::cout << "\nGauss Seidel Method running...";
    std::cout << "\n-------------------------------------------------------------------------";

    ///initializing b vector
    for(int i = 1;i<=n;i++)
    {
        b[i] = 1.0;
    }
    ///initializing vector x
    for(int i = 1;i<=n;i++)
    {
        x[i] = 0;
    }

    ///Main iterative method starts
    do{
        Count += 1;
        ///calculating x (k+1)
        for (int i=1; i<=n; i++){
            x[i] = 0;
            for (int j=1; j<=n; j++){
                if (j == i)
                continue;
                else
                x[i] += A(i, j) * x[j];
            }
            x[i] = (1/A(i, i))*(b[i] - x[i]);
        }
        ///calculating residue for x (k+1)
        for (int i=1; i<=n; i++){
            y[i] = 0;
            for (int j=1; j<=n; j++){
                y[i] += A(i, j) * x[j];
            }
            y[i] = b[i] - y[i];
        }
        ///calculating norm of the residue (Error)
        error = 0;
        for (int i=1; i<=n; i++){
            error += power(y[i], 2);
        }
        ///validating the results
            for (int i=1; i<=n; i++){
            b1[i] = 0;
            for (int j=1; j<=n; j++){
                b1[i] += A(i, j) * x[j];
            }
        }
        if(Count > maxiter)
        break;
    }while(error > tol);

    if ( Count <= maxiter){
    ///printing the A matrix upto size 6x6
    std::cout << "\n\nA matrix is : \n";
    for (int i=1; i<=9; i++){
            for (int j=1; j<=9; j++){
                if (j <= 6 && i <= 6)
                std::cout << A(i, j) << " ";
                else
                std::cout << "." << "    ";
            }
            std::cout << "\n";
        }

    ///printing the x* vector upto size 6
    std::cout << "\n\nx* vector is : \n[ ";
    for(int i=1; i<=9; i++){
        if (i <= 6)
        std::cout << x[i] << " " ;
        else
        std::cout << "." << " ";
    }
    std::cout << " ] " ;

    ///printing the Ax* vector upto size 6
    std::cout << "\n\nAx* vector is : \n[ ";
    for(int i=1; i<=10; i++){
        if (i <= 6)
        std::cout << b1[i] << " " ;
        else
        std::cout << "." << " ";
    }
    std::cout << " ] " ;

    ///Condition to check and print the convergence status
    std::cout << "\n\n\n\n-------------------------------------------------------------------------\nIteration Summary:";
    std::cout << "\nThe iteration converged within the maximum limit";
    std::cout << "\nThe number of iterations taken to converge is : " << Count;
    std::cout << "\nThe error tolerance at the last iteration is : " << error;
    }
    else{
    std::cout << "\n\nIteration Summary:";
    std::cout << "\nThe iteration has not converged within the maximum limit";
    std::cout << "\nThe number of iterations completed while exiting : " << Count;
    std::cout << "\nThe error tolerance at the last iteration is : " << error;
    }
    std::cout << "\n\n\n" ;
    return 0;
}
