#include <iostream>
using namespace std;

class Myclass{
    public:
    int LuasPersegiPanjang(int x , int y){
        return x * y;
    }
    int LuasLingkaran( int r){
        int phi = 22/7;
        return phi * r * r;
    }
    int LuasKerucut(int r , int t){
        float phi =22/7;
        return 0.3 * phi * r * r * t;
    }
    int LuasBola(int r){
        int phi = 22/7;
        return 4/3 * phi * r * r * r;
    }
};



int main(){

    Myclass Myclass;
    cout << Myclass.LuasPersegiPanjang(4,5)<<endl;
    cout << Myclass.LuasLingkaran(4)<<endl;
    cout << Myclass.LuasKerucut(4,5)<<endl;
    cout << Myclass.LuasBola(4);
}

