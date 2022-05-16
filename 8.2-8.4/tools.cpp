#include <iostream>
using namespace std;
void increase(int array[], int size, int value)
{
    for(int i = 0; i < size; ++i) 
    {
        array[i] += value; 
    }
}

bool is_prime(int num)
{
    if (num != 1)
    {
        if(num == 2 or num == 3 or num == 5 or num == 7) {
            return true;
        } else if (num % 2 != 0 and num % 3 != 0 and num % 5 != 0 and num % 7 != 0) {
            return true;
        } else {
            return false;
        }
    }
    return false;
}
int get_prime(int num)
{
    if (num != 1)
    {
        if(num == 2 or num == 3 or num == 5 or num == 7) {
            return num;
        } else if (num % 2 != 0 and num % 3 != 0 and num % 5 != 0 and num % 7 != 0) {
            return num;
        } else {
            return 0;
        }
    }
    return 0;
}
int *copy_array(int target[], int source[], int size) {
    for(int i = 0; i < size; i++)
    {
        target[i] = source[i];
    }
    return target; 
}