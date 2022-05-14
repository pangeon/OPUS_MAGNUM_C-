#include <cstdlib> // Potrzebne do wykonania fukcji losowania
#include <iostream>
#include <ctime> // Potrzebne do wykonania fukcji losowania

using namespace std;

// Opis przykładu: 
// link: https://java2blog.com/random-number-between-1-and-10-cpp/

int main()
{
    srand(time(0)); // Potrzebne do wykonania fukcji losowania

    string your_name;
    const double PI = 3.14; // przybliżenie liczby PI 
    long circle_amount;

    cout << "-- Program do obliczania pol dziur w serze --" << endl;
    cout << "Podaj liczbe dziur w plasterku sera: ";
    cin >> circle_amount;

    for(int i = 0; i < circle_amount; i++) {
        int random_variable = (rand()%10)+1; // losuje liczby z zakresu 1-10
        cout << "pole dziury nr." << i << " " << PI*random_variable*random_variable << endl; // pole koła pi*r*r
    }
}