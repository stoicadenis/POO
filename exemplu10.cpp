#include <iostream>

using namespace std;

class Exemplu {
    int x, y;
public:
    void initializare(int a, int b)
    {
        x = a;
        y = b;
    }
    void afisare()
    {
        cout << "Valoarea lui x:" << x << endl;
        cout << "Valoarea lui y: " << y;
    }
};

int main()
{
    Exemplu ex;
    int var1, var2;
    cout << "Valoarea var 1: ";
    cin >> var1;
    cout << "Valoarea var 2: ";
    cin >> var2;
    ex.initializare(var1, var2);
    ex.afisare();
    getchar();
    return 0;
}