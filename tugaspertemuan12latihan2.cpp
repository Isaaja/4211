#include <iostream>
#include <string>
using namespace std;

class Myclass{
    public:
    string Merk;
    string Type;
    int Tahun;
    int Harga;

};

int main(){
    Myclass Sepeda;
    Sepeda.Merk     = " Polygon ";
    Sepeda.Type     = " Sepeda Gunung ";
    Sepeda.Tahun    = 2004;
    Sepeda.Harga    = 2000000;

    cout << Sepeda.Merk << " " << Sepeda.Type << " "<< Sepeda.Tahun << " "<< Sepeda.Harga;

}