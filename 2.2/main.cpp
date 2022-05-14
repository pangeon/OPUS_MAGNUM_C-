#include <iostream>

using namespace std;

int main()
{
    string your_name;
    int points = 0;

    cout << "Podaj swoje imie: ";
    cin >> your_name;

    if(your_name == "Anna")
    {
        cout << "Dobrze !" << endl;
        points++;
        cout << "Twoje punkty: " << points << endl;
    } 
    else 
    {
        cout << "Twoje imie nie brzmi: " << your_name << endl;
        points--;
        cout << "Twoje punkty: " << points << endl;
    }
}