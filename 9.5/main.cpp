#include <iostream>

using namespace std;

constexpr int multitab_size = 10;

void print_table(int tab[][multitab_size], int size_i, int size_j)
{
    cout << "____________________________\n";
    for(int i = 1; i < size_i; ++i) 
    {
        for(int j = 1; j < size_j; ++j)
        {
            tab[0][i] = i;
            tab[j][i] = j*i;

            tab[j][i] < 10 ? cout << "| " << tab[j][i] : cout << "|" << tab[j][i];
        }
        cout << "|" << endl;
    }
    cout << "----------------------------";
}

int main()
{
    int mult_table[multitab_size][multitab_size] = {};
    print_table(mult_table, multitab_size, multitab_size); 
}