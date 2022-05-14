#include <iostream>

using namespace std;

int main()
{
    int your_rate;

    cout << "Podaj swoja ocene z matematyki na studiach: ";
    cin >> your_rate;

    switch (your_rate)
    {
        case 1:
            cout << "To niemozliwe ! gdyz skala ocen jest od 2.\n";
            break;
        case 2:
            cout << "Kiepsko ale w koncu zdalas gdyz jestes grafikiem.\n";
            break;
        case 3:
            cout << "Wszyscy leca na trojach to normalne.\n";
            break;
        case 4:
            cout << "Brawo matma to trudny przedmiot.\n";
            break;
        case 5:
            cout << "Widac masz talent !\n";
            break;
        default:
            cout << "Przypominam o skali ocen (2-5)\n";
            break;
    }
}