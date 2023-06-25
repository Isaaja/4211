#include <iostream>
#include <string>
using namespace std;

struct Mahasiswa
{
    string NIM;
    string Nama;
    string Jurusan;
    int Tahunlulus;
};

int main()
{
    Mahasiswa data[4];
    int n = sizeof(data) / sizeof(data[0]);
    data[0].NIM = "A11.2020.01234";
    data[0].Nama =  "Andi";
    data[0].Jurusan = "Broadcasting";
    data[0].Tahunlulus = 2023;
    
    data[1].NIM = "A11.2010.01234";
    data[1].Nama =  "Budi";
    data[1].Jurusan = "Sistem Informasi";
    data[1].Tahunlulus = 2013;
    
    data[2].NIM = "A11.2000.01234";
    data[2].Nama =  "Ali";
    data[2].Jurusan = "DKV";
    data[2].Tahunlulus = 2003;
    
    data[3].NIM = "A11.1990.01234";
    data[3].Nama =  "Siti";
    data[3].Jurusan = "Kesehatan";
    data[3].Tahunlulus = 1993;

    for (int x = 0; x < n; x++)
    {
        cout << data[x].NIM << " " << data[x].Nama << " " << data[x].Jurusan << " "<< data[x].Tahunlulus << endl;
    }

    return 0;
}
