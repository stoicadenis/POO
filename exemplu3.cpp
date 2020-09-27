#include <iostream>

using namespace std;

int suma(int a, int b)
{
    return a + b;
}

float suma(float a, float b)
{
    return a + b;
}
int main()
{
    int a, b;
    cout << "Valoare numarului intreg a este: ";
    cin >> a;
    cout << "Valoare numarului intreg b este: ";
    cin >> b;
    cout << "Suma celor doua numere intregi este: " << suma(a, b) << endl;
    float x, y;
    cout << "Valoare numarului real x este: ";
    cin >> x;
    cout << "Valoare numarului real y este: ";
    cin >> y;
    cout << "Suma celor doua numere reale este: " << suma(x, y);
    getchar();
    return 0;
}