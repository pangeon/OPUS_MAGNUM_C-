#include <iostream>
using namespace std;

double *create_ptr();
double *account_balance;

int main() 
{
    cout << "1. Total account balance first day: " << account_balance << "$\n";
    
    double *salary { new double };
    
    auto bonus { new double };

    double *tax_refund = nullptr;
    tax_refund = create_ptr();

    auto *holiday_bonus = create_ptr();

    *salary = 13055.90;
    *bonus = 265.40;
    *tax_refund = 1200.10;

    // *account_balance = *(salary) + *(bonus) + *(tax_refund);

    cout << "2. Total account balance last day: " << *(salary) + *(bonus) + *(tax_refund) << "$\n"; 
    cout << "3. Holiday bonus: " << *(holiday_bonus) << "$\n";

    delete account_balance;
    delete salary;
    delete bonus;
    delete tax_refund;
    // delete holiday_bonus;
}

double *create_ptr() 
{
    double *ptr;
    ptr = new double{};
    return ptr;
}
