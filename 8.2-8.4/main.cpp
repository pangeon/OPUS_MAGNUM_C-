#include <iostream>
#include "tools.cpp"

using namespace std;

int global_num_to_check[] = {2, 4, 6, 8, 10};
int number_array[100]; // {0, 0, 0} ... 

int main()
{
    // I cannot using own function for this solution: https://www.techiedelight.com/print-contents-array-cpp/
    int num_to_check[] = {2, 4, 6, 8, 10}; // 0 - 4
    int size = sizeof(num_to_check) / sizeof(num_to_check[0]);

    increase(num_to_check, size, 1);
    increase(global_num_to_check, size, 1);

    for (int i = 0; i < size + 1; ++i)
        cout << "[" << i << "] local  - " << num_to_check[i] << "\n";        // 5 - random value
        
    cout << "\n";
    for (int i = 0; i < size + 1; ++i)
        cout << "[" << i << "] global - " << global_num_to_check[i] << "\n"; // 5 - always 0

    int index = 0;
    while (index < 101) 
    {
        if (is_prime(index))
            number_array[index] = get_prime(index);
        
        index % 10 ? cout << "\t": cout << "\n";
            cout << number_array[index];
        
        ++index; 
    }
}