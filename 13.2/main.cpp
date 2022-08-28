#include <iostream>
using namespace std;

int main() 
{
    cout << "---------------" << endl;

    double const PI = 3.14; 
    const double* double_ptr_pi = 0;

    double_ptr_pi = &PI;

    cout << &double_ptr_pi << endl;
    cout << double_ptr_pi << endl;
    cout << *double_ptr_pi << endl;

    cout << "---------------" << endl;

    double const E = 2.71; 
    const double* const double_ptr_e = &E;

    // double_ptr_sqrt = &sqrt_2;

    cout << &double_ptr_e << endl;
    cout << double_ptr_e << endl;
    cout << *double_ptr_e << endl;

    cout << "---------------" << endl;

    double sqrt_2 = 1.41; // bez const 
    double* const double_ptr_sqrt = &sqrt_2;

    // double_ptr_sqrt = &sqrt_2;

    cout << &double_ptr_sqrt << endl;
    cout << double_ptr_sqrt << endl;
    cout << *double_ptr_sqrt << endl;

}