#include <iostream>
using namespace std;

void lopfor(){
     for (int a = 10; a >= 3; a--){
            cout << a << endl;
        }
}

void tambah(){
    int a = 10;
    int b = 5;
    int c;
    c = a + b;
    cout << c << endl;
}

void pilih(){
    int pil;
    
    pilihan:
        cout << "0. Exit" << endl;
        cout << "1. Penjumlahan" << endl;
        cout << "2. Loopfor" << endl;
        cout << "Pilihan : ";
        cin >> pil;
        system("clear");

    if (pil==0){
        cout << "Thanks" << endl;
        return;
    }else if (pil == 1){
        tambah();
        goto pilihan;
    }else if (pil == 2){
        lopfor();
        goto pilihan;
    }else{
        cout << "Pilihan Salah" << endl;
        goto pilihan;
    }
}

int main(){
    pilih();
    return 0;
}