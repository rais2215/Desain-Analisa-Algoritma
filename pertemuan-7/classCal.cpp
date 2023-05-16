#include <iostream>
#include "kalkulator.cc"

using namespace std;

int main(){
    kalkulator k;
    int pilih;
    char pil;

    Menu :
        cout << "0. Exit" << endl;
        cout << "1. Tambah" << endl;
        cout << "2. Kurang" << endl;
        cout << "3. Bagi" << endl;
        cout << "4. Kali" << endl;
        cout << "Pilihan : ";
        cin >> pilih;
        system("clear");

        switch(pilih) {
            case 0:
                goto Keluar;
                break;
            case 1:
                k.input();
                cout << "Hasil : " << k.tambah() << endl;
                break;
            case 2:
                k.input();
                cout << "Hasil : " << k.kurang() << endl;
                break;
            case 3:
                k.input();
                cout << "Hasil : " << k.bagi() << endl;
                break;
            case 4:
                k.input();
                cout << "Hasil : " << k.kali() << endl;
                break;
            default:
                cout << "Pilihan Salah" << endl;
                break;
        }

        cout << "Kembali ke Menu (y/n) : ";
        cin >> pil;
        system ("clear");
        if ((pil == 'Y') || (pil == 'y')){
            goto Menu;
        }else if ((pil == 'N') || (pil == 'n')){
            goto Keluar;
        }
    Keluar :
        cout << "Thanks" << endl;
}
