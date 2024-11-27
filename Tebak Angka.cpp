#include <iostream>
#include <cstdlib>  // Lib. rand dan srand
#include <ctime>    // Lib. time	

using namespace std;

int main() {
    srand(time(0));

    int angka = rand() % 100 + 1; // Angka acak antara 1 dan 100
    int tebakan;
    int jumlah_tebakan = 0;
    const int MAX_TEBAKAN = 7;  

    cout << "Selamat datang di permainan Tebak Angka!" << endl;
    cout << "Pilih angka antara 1 dan 100." << endl;
    cout << "Coba tebak angka tersebut!" << endl;
    
    do {
        cout << "Masukkan tebakan Anda: ";
        cin >> tebakan;  // Masukkan angka untuk menebak
        jumlah_tebakan++;

        if (tebakan < angka) {
            cout << "Tebakanmu terlalu rendah. Coba lagi!" << endl;
        } else if (tebakan > angka) {
            cout << "Tebakanmu terlalu tinggi. Coba lagi!" << endl;
        } else {
            cout << "Selamat! Tebakanmu Benar " << angka
                 << " dengan benar setelah " << jumlah_tebakan << " tebakan." << endl;
            break;  // Keluar dari permainan jika tebakan benar
        }

        
        if (jumlah_tebakan >= MAX_TEBAKAN) {
            cout << "Kesempatanmu menebak habis (" << MAX_TEBAKAN << " tebakan). Permainan selesai\n"<< "Kamu Gagal "<< endl;
            break;  // Keluar dari permainan jika tebakan mencapai maksimum
        }

    } while (tebakan != angka);  

    return 0;
}

