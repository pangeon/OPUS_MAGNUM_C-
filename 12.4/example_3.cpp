#include <iostream>
using namespace std;

void show_and_fill_empty(int *ptr, const int tab_size) {
    cout << "Table contain: \n";
    for(int i = 0; i < tab_size; i++) {
        if (i > 5) {
            *(ptr) = 0;
        } 
        cout << "[" << i << "] - " << *(ptr) << "\n";
        ptr++;
    }
}

int main() 
{
    cout << "Enter size new table: ";
    int tab_size;
    cin >> tab_size;

    int *ptr_prime_numbers = new int[tab_size];

    *ptr_prime_numbers = 2;
    ptr_prime_numbers[1] = 3;
    *(ptr_prime_numbers + 2) = 5;
    *(ptr_prime_numbers + 3) = 7;
    ptr_prime_numbers[4] = 11;

    show_and_fill_empty(ptr_prime_numbers, tab_size);
}