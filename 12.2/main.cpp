#include <iostream>
using namespace std;

void show_elementals(string tab[], int tab_size) 
{
    cout << "a) Elements list: \n";
    for(int i = 0; i < tab_size; i++) 
    {
        cout << tab[i] << " | ";
    }
    cout << "\n";
}
void show_elementals_ptr(const string *ptr, int tab_size) 
{
    cout << "b) Elements list: \n";
    for(int i = 0; i < tab_size; i++) 
    {
        cout << *(ptr++) << " | ";

        // table notation: 
        // cout << ptr[i] << "\t"; 
        // give the same result
    }
    cout << "\n";
}
void add_is_gas_info(string *ptr, int min_range, int max_range) 
{
    cout << "c) Elements list edited: \n";
    for(int i = min_range; i < max_range; i++) 
    {
        *ptr += " gas form of element.";
        cout << "mendeleev_tab [" << i << "] - " << *(ptr++) << "\n";
    }
    cout << "\n";
}

int main() 
{
    string mendeleev_tab[10] = {"oxygen","nitrogen","neon","iron","silver","gold","uranium","lead","sulfur","titanium"};
    string mendeleev_tab_copy[10] = {"oxygen","nitrogen","neon","iron","silver","gold","uranium","lead","sulfur","titanium"};
    show_elementals(mendeleev_tab, 10);
    show_elementals_ptr(mendeleev_tab, 10);
    add_is_gas_info(mendeleev_tab_copy, 0, 3);

    if(mendeleev_tab[0] != mendeleev_tab_copy[0]) 
    {
        cout << "End programme.";
    }
}