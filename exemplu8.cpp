#include <iostream>

using namespace std;

int main()
{
    int x, y;
    cout << "Dati valoarea lui x: ";
    cin >> x;
    cout << "Dati valoarea lui y: ";
    cin >> y;
    cout << "Minimul este: " << (x < y ? x : y);
    getchar();
    return 0;
}