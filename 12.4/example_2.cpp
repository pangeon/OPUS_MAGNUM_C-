#include <iostream>
using namespace std;

double *create_ptr();
double *account_balance; // pointer is not variable

int main() 
{
    cout << "1. Total account balance first day: " << account_balance << "$\n";
    
    auto *salary {new double{13055.90}};
    auto *bonus {new double{265.40}};
    auto *tax_refund {new double{1200.10}};
    auto *holiday_bonus = create_ptr();

    cout << "2. Total account balance last day: " << *(salary) + *(bonus) + *(tax_refund) << "$\n"; 
    cout << "3. Holiday bonus: " << *(holiday_bonus) << "$\n";

    cout << "4. Show object in memory: \n" 
    << "salary - \t\t\t\t" << &salary << "\n" 
    << "bonus - \t\t\t\t" << &bonus << "\n"  
    << "tax_refund - \t\t\t\t" << &tax_refund << "\n" 
    << "holiday_bonus - \t\t\t" << &holiday_bonus << "\n" 
    << "account_balance - \t\t\t" << &account_balance << "\n";

    delete salary;
    delete bonus;
    delete tax_refund;
}

double *create_ptr() 
{
    auto *ptr {new double{}};
    return ptr;
}
