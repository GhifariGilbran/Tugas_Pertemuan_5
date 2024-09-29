#include <iostream>
using namespace std;

// Fungsi untuk menghitung gaji pokok
int pokok(int jamKerja) {
    return jamKerja * 7500;
}

// Fungsi untuk menghitung uang lembur
int lembur(int jamKerja) {
    if (jamKerja > 8) {
        return (jamKerja - 8) * 7500 * 1.5;
    }
    return 0;
}

// Fungsi untuk menghitung uang makan
int makan(int jamKerja) {
    if (jamKerja >= 9) {
        return 10000;
    }
    return 0;
}

// Fungsi untuk menghitung uang transport
int transport(int jamKerja) {
    if (jamKerja >= 10) {
        return 13000;
    }
    return 0;
}

int main() {
    // Variabel input
    string NIP, Nama;
    int jamKerja;

    // Input data karyawan
    cout << "Masukkan NIP: ";
    cin >> NIP;
    cout << "Masukkan Nama: ";
    cin.ignore();
    getline(cin, Nama);
    cout << "Masukkan jumlah jam kerja: ";
    cin >> jamKerja;

    // Hitung gaji
    int gajiPokok = pokok(jamKerja);
    int uangLembur = lembur(jamKerja);
    int uangMakan = makan(jamKerja);
    int uangTransport = transport(jamKerja);

    // Output hasil perhitungan
    cout << "\n--- Rincian Gaji Karyawan ---" << endl;
    cout << "NIP         : " << NIP << endl;
    cout << "Nama        : " << Nama << endl;
    cout << "Gaji Pokok  : Rp. " << gajiPokok << endl;
    cout << "Lembur      : Rp. " << uangLembur << endl;
    cout << "Uang Makan  : Rp. " << uangMakan << endl;
    cout << "Transport   : Rp. " << uangTransport << endl;

    return 0;
}
