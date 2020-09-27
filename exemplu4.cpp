#include <iostream>

using namespace std;

typedef struct
{
    char marca[20];
    char model[30];
    float consum, pret;
}masina;

int main()
{
    masina *ma;
    ma = new masina;
    cout << "Dati marca masinii: ";
    cin >> ma->marca;
    cout << "Dati modelul masinii: ";
    cin >> ma->model;
    cout << "Dati consumul de combustibil: ";
    cin >> ma->consum;
    cout << "Dati pretul masinii: ";
    cin >> ma->pret;
    cout << "Marca: " << ma->marca << " Model: " << ma->model << " Consum: " << ma->consum << " Pret: " << ma->pret;
    delete ma;
    getchar();
    return 0;
}