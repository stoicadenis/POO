#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    char nume[20], prenume[20], adresa[50], nr_tel[11];
    int varsta;
    cout<<"Nume: "; cin>>nume;
    cout<<"Prenume: "; cin>>prenume;
    cout<<"Varsta: "; cin>>varsta;
    cout<<"Adresa: "; cin>>adresa;
    cout<<"Nr. Tel: "; cin>>nr_tel;
    cout<<"Prenume Nume: "<<prenume<<" "<<nume<<endl;
    cout<<"Varsta: "<<varsta<<endl;
    cout<<"Adresa: "<<adresa<<endl;
    cout<<"Nr. Tel: "<<nr_tel;
    getchar();
    return 0;
}