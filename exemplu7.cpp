#include <iostream>

using namespace std;

inline int minim(int x, int y)
{
    return x < y ? x : y;
}

int main()
{
    int x, y;
    cout << "Dati valoarea lui x: ";
    cin >> x;
    cout << "Dati valoarea lui y: ";
    cin >> y;
    cout << "Minimul este: " << minim(x, y);
    getchar();
    return 0;
}