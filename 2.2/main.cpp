#include <iostream>

using namespace std;

int main()
{
    string your_name; // zawiera napis
    int points = 0; // zawiera liczbę całkowitą 

    cout << "Podaj swoje imie: ";
    cin >> your_name;

    if (your_name == "Anna")
    {
        cout << "Dobrze !" << endl;
        points++; // inkremetacja zw. o 1
        cout << "Twoje punkty: " << points << endl;
    }
    else
    {
        cout << "Twoje imie nie brzmi: " << your_name << endl;
        points--; // dekrementacja zmniejszo o 1
        cout << "Twoje punkty: " << points << endl;
    }
}