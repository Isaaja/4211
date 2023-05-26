#include <iostream>
using namespace std;

int penjumlahan(int a, int b);
int pengurangan(int a, int b);
int perkalian (int a, int b);
float pembagian (int a, int b);
int pangkat (int a, int b);
int main(){
    cout<< "Penjumlahan antara 2 bilangan yaitu ( 5 dan 2 ) = "<<penjumlahan (5,2)<<endl;
    cout<< "Pengurangan antara 2 bilangan yaitu ( 5 dan 2 ) = "<<pengurangan (5,2)<<endl;
    cout<< "Perkalian antara 2 bilangan yaitu ( 5 dan 2 ) = "<<perkalian (5,2)<<endl;
    cout << "Pembagian antara 2 bilangan yaitu ( 5 dan 2 ) = " << pembagian(5,2) << endl;
    cout << "Perpangkatan untuk bilangan (5 pangkat 2) = " << pangkat(5, 2);
}
int penjumlahan(int a, int b){
    if(b == 0){
        return a;
    }
    else 
    return 1 + penjumlahan(a, b-1);
}
int pengurangan(int a, int b){
    if(a == 0){
        return b;
    }
  
    else 
    return a - pengurangan(a-a, b);
}
int perkalian(int a, int b){
    if(b == 1){
        return a;
    }
    else if(b== 0){
        return 0;
    }
    else
    return b * perkalian(a, b-1);

}
float pembagian(int a, int b){
    if(a==1){
        return b;
    }
    else if(a==0){
       return 0;
    }
    else 
    return a / pembagian(a/a, b);
}
int pangkat (int a, int b){
    if(b==0){
        return 1;
    }
    else
    return a * pangkat(a, b-1)
;}
