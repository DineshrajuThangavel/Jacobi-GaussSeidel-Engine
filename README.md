# 🔢 Gauss-Seidel and Jacobi Iterative Solvers in C++

This project implements two classic iterative methods — the Gauss-Seidel and Jacobi algorithms — for solving linear systems of equations using C++. It was developed as a coursework project to understand the fundamentals of numerical linear algebra and iterative solvers.

## 📌 Features
- Implementation of both Jacobi and Gauss-Seidel methods
- User-defined system size, error tolerance, and max iterations
- Residual norm calculation to check convergence
- Matrix A implemented in two modes:
  - Version A: Fully stored matrix
  - Version B: Matrix entries calculated as needed (no full storage)
- No use of external libraries — all math functions are implemented from scratch

## 📂 Files Included
- `Main.cpp`: Entry point and user interface
- `Matrix_Implement.cpp`: Matrix entry handling
- `Jacobi.cpp`: Jacobi solver
- `Gauss_Seidel.cpp`: Gauss-Seidel solver
- `Aux_implement.cpp`: Auxiliary math functions (abs, pow, etc.)
- `Intro.cpp`: Output formatting and helper functions
- `T7-Gauss-Seidel+Jacobi-C++.pdf`: Documentation/report
- `Gauss Seidel_Jacobi_Result.jpg`: Output example/visual result

## 📚 Technologies
- C++ (Standard I/O, modular programming)
- Numerical methods: Iterative solvers for Ax = b

## 🎓 Academic Context
Developed as part of a numerical methods course in the field of computational science/engineering.
