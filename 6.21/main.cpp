#include <iostream>
#include <math.h>

using namespace std;

constexpr long long factorial(int n)
{
    return n > 0 ? factorial(n - 1) : 1;
}
constexpr long power(int a, int n)
{
    return n != 1 ? a * power(a, n - 1) : 1;
}
constexpr double sin(double x)
{
    return x - power(x, 3) / factorial(3) + power(x, 5) / factorial(5) - power(x, 7) / factorial(7) + power(x, 9) / factorial(9);
}
constexpr double deg_to_rad(double degree)
{
    return M_PI * degree / 180;
}
constexpr double abs_(const double &n)
{
    return n < 0 ? -n : n;
}

const double sin_tab[] = {sin(deg_to_rad(0)), sin(deg_to_rad(2.5)), sin(deg_to_rad(5)), sin(deg_to_rad(7.5))};

int main()
{
    cout << sin(1) << endl;
    for (int i = 0; i < 4; ++i)
    {
        cout << "sin " << i * 2.5 << " degree to " << sin_tab[i] << endl;
    }
    const double num = -55.8;
    const double & num_adress = num;
    cout << "absolute value " << abs_(num) << " of number: " <<  num;
}