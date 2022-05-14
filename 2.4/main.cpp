#include <iostream>

using namespace std;

int main()
{
    float result;
    int points = 0;

    do
    {
        cout << "Podaj wynik operacji " << "5 + 5.1 * 5 : ";
        cin >> result;

        cout << "Wynik operacji 5+5.1*5 to nie: " << result << endl;
        points--;
        cout << "Twoje punkty: " << points << endl;
    } 
    while(result != 30.5); 

    cout << "Dobrze !" << endl;
    points++;
    cout << "Twoje punkty: " << points << endl;
}