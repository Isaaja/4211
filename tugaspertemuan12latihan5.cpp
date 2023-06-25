#include <iostream>
#include <cstring>
using namespace std;

struct Sepeda
{
    char Merk[20];
    char Type[20];
    int Tahun;
    char Harga[20];
};

int main()
{
    Sepeda data;
    Sepeda *pdata; // create a pointer of structure type
    pdata = &data;  // assign address to pointer of structure type

    strcpy(pdata->Merk, "Polygon");
    strcpy(pdata->Type, "Sepeda Gunung");
    strcpy(pdata->Harga, "2.000.000");
    pdata->Tahun = 2013;

    cout << pdata->Merk <<endl;
    cout << pdata->Type <<endl;
    cout << pdata->Tahun <<endl;
    cout  << pdata->Harga;

    return 0;
}
