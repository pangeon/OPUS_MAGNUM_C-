#include <iostream>

using namespace std;

int main()
{
    int liczba = 6; // zmienna typu int
    int *wskaznik;  // wskaznik do typu int (1)

    wskaznik = &liczba; // powiazanie wskaznika ze zmienna liczba

    cout << "Wartosc zmiennej liczba wynosi " << liczba << endl;
    cout << "Adres zmiennej wynosi " << &liczba << endl;
    cout << "Wartosc wskaznika wynosi " << wskaznik << endl;
    cout << "Wyluskana wartosc ze wskaznika wynosi " << *wskaznik << endl; // (2)

    // porownajmy adres wskaznika i adres zmiennej

    if (&liczba == wskaznik) // (3)
        cout << "Obie zmienne wskazuja na ten sam adres" << endl;
    else
        cout << "Zmienne wskazuja na rozne adresy" << endl;

    // porownajmy wyluskana wartosc i wartosc zmiennej

    if (liczba == *wskaznik) // (4)
        cout << "Obie wartosci sa identyczne" << endl;
    else
        cout << "Wartosci sa inne" << endl;

    cout << endl
         << "Nacisnij ENTER aby zakonczyc..." << endl;
    getchar();
    return 0;
}