#include <iostream>

using namespace std;

int globalny_jedynkowy = 25;
int globalny_inny = 77;

int f_wartosc(int ktory) 
{
    int lokalny = 4; // zbędne ale mogę to zwrócić
    if (ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
} 
int & f_ref_lwartosci(int ktory) 
{
    int lokalny = 4; // zbędne NIE mogę tego zwrócić
    if (ktory == 1) return globalny_jedynkowy;
    else return globalny_inny;
}
void wypisz(string txt, int a) 
{
    cout << txt;
    if(a) cout << a << ", ";
    cout << "globalny_jedynkowy = " << globalny_jedynkowy << ", globalny_inny = " << globalny_inny << endl;
}

int main() 
{
    int n{0};

    n = f_wartosc(1);
    wypisz("f_wartosc(1) = ", n); // 25
    n = f_wartosc(6);
    wypisz("f_wartosc(6) = ", n); // 77

    cout << "\n";

    n = f_ref_lwartosci(1);
    wypisz("f_ref_lwartosci(1) = ", n); // 25
    n = f_ref_lwartosci(6);
    wypisz("f_ref_lwartosci(6) = ", n); // 77

    cout << "\n";

    n = f_ref_lwartosci(1) = 5000;
    wypisz("f_ref_lwartosci(1) ", 0);
    n = f_ref_lwartosci(6) = 8000;
    wypisz("f_ref_lwartosci(6) ", 0);

}