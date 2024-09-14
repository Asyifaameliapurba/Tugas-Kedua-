//Dibuat oleh Asyifa amelia Purba
//Tanggal 13 september 2024
#include<iostream>
using namespace std;

int main() {
    int penjln; //input jmlh penjualan
    float komisi; //input komisi yang diterima
    cout << "Masukkan jmlh penjualan; ";
    cin >>penjln;
    if (penjln < 500000) {
        komisi = penjln * 0.10;
    } else {
        komisi = 500000 * 0.10 + (penjln - 500000) * 0.15;
    }
    cout << "komisi yang diterima; " << komisi << endl;
    return 0;
}