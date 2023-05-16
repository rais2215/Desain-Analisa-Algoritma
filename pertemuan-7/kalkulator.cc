#include <iostream>

using namespace std;

class kalkulator{
    private:
        int a,b;
    public:
        void input () {
            cout << "Angka 1 : ";
            cin >> a;
            cout << "Angka 2 : ";
            cin >> b;
        }

        int tambah() {
            return a + b;
        }
        int kurang() {
            return a - b;
        }
        int bagi() {
            return a / b;
        }
        int kali() {
            return a * b;
        }
};
