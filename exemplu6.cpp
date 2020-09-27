#include <iostream>

using namespace std;

class Dreptunghi
{
    int lungime, latime;
public:
    void setare_valori(int, int);
    int aria(void);
};

void Dreptunghi::setare_valori(int a, int b)
{
    lungime = a;
    latime = b;
}

int Dreptunghi :: aria(void)
{
    return (lungime * latime);
}

int main()
{
    Dreptunghi drept;
    drept.setare_valori(3, 8);
    cout << "Aria este: " << drept.aria();
    getchar();
    return 0;
}