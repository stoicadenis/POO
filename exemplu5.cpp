#include <iostream>

using namespace std;

int negativ(int &i)
{
    return -i;
}

int main()
{
    int valoare;
    cout << "Dati valoarea: ";
    cin >> valoare;
    cout << "Valoarea negativa este: " << negativ(valoare);
    getchar();
    return 0;
}