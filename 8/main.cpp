#include <iostream>

using namespace std;

int global_num_to_check[] = {2, 4, 6, 8, 10};


int main()
{
    // I cannot using own function for this solution: https://www.techiedelight.com/print-contents-array-cpp/
    int num_to_check[] = {2, 4, 6, 8, 10}; // 0 - 4
    int size = sizeof(num_to_check)/sizeof(num_to_check[0]);
    for (int i = 0 ; i < size + 1; ++i) {
        cout << "[" << i << "] local  - " << num_to_check[i] << "\n"; // 5 - random value
        cout << "[" << i << "] global - " << global_num_to_check[i] << "\n"; // 5 - always 0 
    }
    for (int i = 0 ; i < size + 1; ++i) {
        cout << "[" << i << "] adres local  - " << & num_to_check[i] << "\n"; 
        cout << "[" << i << "] adres global - " << & global_num_to_check[i] << "\n";
    }
}