#include <iostream>

using namespace std;

int main()
{
    int nr;
    cout << "Valoare numarului intreg este: ";
    cin >> nr;
    int s = 0, p = 1;
    while (nr != 0)
    {
        if (nr % 2 == 0)
            s = s + nr;
        else
            p = p * nr;
        cout << "Valoare numarului intreg este: ";
        cin >> nr;
    }
    cout << "Suma numerelor pare este: " << s << endl;
    cout << "Produsul numerelor impare este: " << p;
    getchar();
    return 0;
}