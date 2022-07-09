#include <iostream>
using namespace std;

int main() 
{
    int tab_empty_int[10];
    int *tab_empty_pointer_int;

    tab_empty_pointer_int = &tab_empty_int[0];
    for(int i = 0; i < 10; i++, tab_empty_pointer_int++) 
        cout << "tab_empty_int    [" << i << "] - memory adress: " << tab_empty_pointer_int << "\n";

    cout << "--------------------------------------------------\n";

    double tab_empty_double[10];
    double *tab_empty_pointer_double;

    tab_empty_pointer_double = tab_empty_double;
    for(int i = 0; i < 10; i++, tab_empty_pointer_double++) 
        cout << "tab_empty_double [" << i << "] - memory adress: " << tab_empty_pointer_double << "\n"; 
    
}