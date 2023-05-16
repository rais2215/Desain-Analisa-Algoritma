#include <iostream>
using namespace std;

int main(){
    int angka [3] [3] = {
        {1,2,3},
        {2,4,6},
        {1,3,6}
    };

    for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            cout << "elemen ke ["<< i <<"] ["<< j << "] nilainya : " ;
            cout << angka[i][j] << endl;
        }
    }
}