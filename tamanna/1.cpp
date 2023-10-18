/*Employ a function called riemannSums(). Write a C++ program for integrating this function

by means of Riemann sums. Use the following formula:

f(x)dx=(a+jh) h*/

#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

double riemannSums(double x)
{
    return (pow(x, 2) + 1);
}

int main()
{
    double a, b, n, h, sum = 0, x;
    cout << "Enter the value of a: ";
    cin >> a;
    cout << "Enter the value of b: ";
    cin >> b;
    cout << "Enter the value of n: ";
    cin >> n;
    h = (b - a) / n;
    x = a;
    for (int i = 0; i < n; i++)
    {
        sum += riemannSums(x) * h;
        x += h;
    }
    cout << "The value of the integral is: " << setprecision(10) << sum << endl;
    return 0;
}