#include <iostream>

using namespace std;

int sum(int steps_amount, int actual_sum) 
{
    int result = 0;
    static int current_step;
    current_step++;
    actual_sum += current_step;

    cout << "step nr. " << current_step << ": " << actual_sum << endl;

    steps_amount > 0 ? result = sum(steps_amount - 1, actual_sum) : result = actual_sum;
    return result;
}
void to_bin(int decimal_num)
{
    int rest = decimal_num % 2;
    if (decimal_num > 1) to_bin(decimal_num / 2); 
    cout << rest;  
} 

int main()
{
    int result = sum(10, 0);
    to_bin(241);
}