#include <iostream>
using namespace std;

int main() 
{
    int *historical_dates_ptr;
    int historical_dates[10] = {996,1364,1655,1683,1791,1863,1914,1939,1945,2004};

    string *desc_hist_dates_ptr;
    string desc_hist_dates[10];

    desc_hist_dates_ptr = desc_hist_dates;

    for (int i = 0; i < 10; i++) 
        *(desc_hist_dates_ptr++) = "In year: " + to_string(historical_dates[i]);
    

    desc_hist_dates_ptr = &desc_hist_dates[0]; // set pointer again
    for (int i = 0; i < 10; i++) 
    {
        cout << "desc_hist_dates[" << i << "] " << *desc_hist_dates_ptr << "\n";
        desc_hist_dates_ptr++;
    }
    int i = 7;
    desc_hist_dates_ptr = desc_hist_dates + i;
    *(desc_hist_dates_ptr++) += " - The beginning of the First World War takes place."; 
    *(desc_hist_dates_ptr++) += " - World War II ends"; 
    *(desc_hist_dates_ptr++) += " - Poland joins the EU";

    cout << "\n";
    desc_hist_dates_ptr = &desc_hist_dates[0]; // set pointer again
    for (int i = 0; i < 10; i++) 
    {
        cout << "desc_hist_dates[" << i << "] " << *desc_hist_dates_ptr << "\n";
        desc_hist_dates_ptr++;
    }
}