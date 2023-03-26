#include <iostream>
using namespace std;

//judul     : Tugas 2 menggunakan fungsi

//kamus :
int max(int a, int b);                //deklarasi dari mencari 2 nilai terbesar
int min (int a, int b);               //deklarasi dari mencari 2 nilai terkecil
int MaxArray(int arr[], int size);    //deklarasi dari mencari nilai array terbesar
int MinArray(int arr[], int size);    //deklarasi dari mencari nilai array terkecil
bool Even (int a);                    //deklarasi dari mencari nilai genap menggunakan boolean
bool Odd  (int a);                    //deklarasi dari mencari nilai ganjil menggunakan boolean
bool Factor (int a, int b);           //deklarasi dari mencari faktor dari 2 nilai
int sumEven (int arr[], int size);
int sumOdd(int arr[], int size);

//code
int main(){
    int arr[] = {1, 2, 3, 4};
    int size = 4;
    cout << "Nilai terbesar dari 4 dan 5 adalah = " << max(4,5)<<endl;
    cout << "Nilai terkecil dari 4 dan 5 adalah = " << min(4, 5)<<endl;
    cout<< "Nilai terbesar dari Array = {1,2,3,4} adalah = " << MaxArray(arr,size)<<endl;
    cout<< "Nilai terkecil dari Array = {1,2,3,4} adalah = " << MinArray(arr, size)<<endl;
    cout<< "Apakah Nilai 5 merupakan Genap atau Ganjil menggunakan boolean "<<endl;
    cout<< "Jika 1 maka (True) Jika 0 maka (False) :"<<endl;
    cout<< "Bil Genap : "<<Even(5)<<endl;
    cout<< "Bil Ganjil : "<<Odd(5)<<endl;
    cout<< "Apakah 4 faktor dari 2 = "<<Factor(2,4)<<endl;
    cout<< "Penjumlahan Bilangan array genap diatas adalah : "<<sumEven(arr,size)<<endl;
    cout << "Penjumlahan Bilangan array genap diatas adalah : "<<sumOdd(arr,size);
}

int max(int a, int b){      //definisi dari mencari 2 nilai terbesar
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}

int min(int a, int b){      // definisi dari mencari 2 nilai terkecil
    if (a < b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int MaxArray(int arr[], int size){      //definisi dari mencari nilai array terbesar
    int sum = 0;
    for(int i=0; i< 4; i++){
        if(sum < arr[i]){
            sum = arr[i];
        }
        else{
            sum = sum;
        }
    }return sum;
}

int MinArray(int arr[], int size)       //definisi dari mencari nilai array terkecil
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] > sum)
        {
            sum = arr[i];
        }
        else{
            sum = sum;
        }
    return sum;
    }
}

bool Even(int a){                       //definisi dari mencari nilai genap menggunakan boolean
    if(a % 2 == 0){
        return true;
    }
    else{
        return false;
    }
}

bool Odd(int a){                       //definisi dari mencari nilai ganjil menggunakan boolean
    if (a % 2 == 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Factor(int a, int b){             //definisi mencari faktor dari 2 nilai
    if(b % a ==0){
        return true;
    }
    else{
        return false;
    }
}

int sumEven(int arr[], int size){       //definisi menjumlahkan nilai genap dari sebuah array
    int sum = 0;
    for(int i=0; i < size; i++){
        if (arr[i] % 2 == 0){
            sum = sum + arr[i];
        }
    }
    return sum;
}


int sumOdd(int arr[], int size)         //definisi menjunmlahkan nilai ganjil dari sebuah array
{
    int sum = 0;
    for (int i = 0; i < 4; i++)
    {
        if (arr[i] % 2 == 1)
        {
            sum = sum + arr[i];

        }
    }
    return sum;
}
