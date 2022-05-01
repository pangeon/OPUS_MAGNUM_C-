#include <iostream>

/*
Funkcja nie może zwracać przez referencję (ani przez wskaźnik) swoich zmiennych lokalnych, 
gdyż po powrocie do funkcji wywołującej zmienne lokalne funkcji już nie istnieją. 
Może natomiast zwrócić zmienną lokalną przez wartość: po powrocie z funkcji zmienna lokalna nie istnieje, 
ale kopia jej wartości, po ewentualnej konwersji do typu zadeklarowanego jako typ zwracany, 
przekazana zostaje do funkcji wywołującej (poprzez stos, rejestr procesora lub jeszcze inaczej; 
to już jest szczegół implementacyjny, którym nie musimy się zajmować).
*/

using namespace std;

bool x = true;

bool & compare(int a, int b) 
{
    if(a > b) {
        return x;
    } else {
        x = false;
        return x;
    } 
}
void print() {
    cout << x << endl;
}

int main() 
{
    x = compare(3, 5) = true;
    print();
    return 0;
}