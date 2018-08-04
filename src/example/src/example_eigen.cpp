#include "example_eigen.h"
void example_eigen()
{
	Matrix2f A, Ainv;
    Matrix2f I= Matrix2f::Identity(2,2); // I is an identity matrix
    A << 2,-1,-1,3;
    Ainv= A.ldlt().solve(I);    // ldlt() can be replaced by other decomposition solvers
    cout << "The matrix A is:\n" << A << endl;
    cout << "The inversion of matrix A is:\n" << Ainv << endl;
}