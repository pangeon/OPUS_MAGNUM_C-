#include <iostream>

using namespace std;

int main()
{
    string your_name;
    long counter = 0;

    while(your_name != "Anna")
    {
        cout << "Podaj swoje imie: ";
        cin >> your_name;
    }

    while(counter < 10)
    {
        cout << "Witaj " << your_name << " w ten wieczorek.\n"; 
        counter++;
    }
}