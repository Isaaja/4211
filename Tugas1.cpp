#include <iostream>
using namespace std;

// Function
int tambah(int a, int b)
{
    return a + b;
}
// void
void kurang(int a, int b)
{
    cout << a - b;
}

int myFunction(int myArr[], int size)
{
    int sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + myArr[i];
    }
    return sum;
}

float myFunction2(int myArr[], int size)
{
    float sum = 0;
    for (int i = 0; i < size; i++)
    {
        sum = sum + myArr[i];
    }
    return sum / size;
}

int main()
{

    cout << "Penjumlahan 4 + 5 : " << tambah(4, 5) << endl;
    cout << "Pengurangan 5-1 : ";
    kurang(5, 1);
    cout << endl;
    cout << "Menjumlah bilangan menggunakan Array : ";
    int myArr[] = {4, 2, 3, 1};
    cout << myFunction(myArr, 4);
    cout << endl;
    cout << "Mencari rata-rata array : ";
    cout << myFunction2(myArr, 4);
}