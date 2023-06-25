#include <iostream>
using namespace std;

enum Cuaca
{
    Cerah,
    Mendung,
    Hujan,
    Badai
};

enum Kendaraan
{
    Motor,
    Mobil,
    Sepeda
};

enum Nilai
{
    A,
    B,
    C,
    D,
    E
};

int main()
{
    Cuaca hariIni = Hujan;
    Kendaraan Kendaraan = Motor;
    Nilai nilaiFisika = B;

    cout << "Cuaca hari ini: ";
    switch (hariIni)
    {
    case Cerah:
        cout << "Cerah" << endl;
        break;
    case Mendung:
        cout << "Mendung" << endl;
        break;
    case Hujan:
        cout << "Hujan" << endl;
        break;
    case Badai:
        cout << "Badai" << endl;
        break;
    }

    cout << "Gear kendaraan: ";
    switch (Kendaraan)
    {
    case Motor:
        cout << "Motor" << endl;
        break;
    case Mobil:
        cout << "Mobil" << endl;
        break;
    case Sepeda:
        cout << "Sepeda" << endl;
        break;
    }

    cout << "Nilai Fisika: ";
    switch (nilaiFisika)
    {
    case A:
        cout << "A" << endl;
        break;
    case B:
        cout << "B" << endl;
        break;
    case C:
        cout << "C" << endl;
        break;
    case D:
        cout << "D" << endl;
        break;
    case E:
        cout << "E" << endl;
        break;
    }

    return 0;
}
