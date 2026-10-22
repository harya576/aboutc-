#include <iostream>
using namespace std;

int main() {
    char nama[70], nim[20], kelas[10], hobi[50], perguruanTinggi[] = "Universitas Pamulang";

    cout << "Masukkan Nama       : ";
    cin.getline(nama, 70);
    cout << "Masukkan NIM        : ";
    cin.getline(nim, 20);
    cout << "Masukkan Kelas      : ";
    cin.getline(kelas, 10);
    cout << "Masukkan Hobi       : ";
    cin.getline(hobi, 50);

    char* ptrNama = nama;
    char* ptrNim = nim;
    char* ptrKelas = kelas;
    char* ptrHobi = hobi;
    char* ptrUniv = perguruanTinggi;

    cout << "\n=== DATA MAHASISWA ===" << endl;
    cout << "Nama        : " << ptrNama << endl;
    cout << "NIM         : " << ptrNim << endl;
    cout << "Kelas       : " << ptrKelas << endl;
    cout << "Hobi        : " << ptrHobi << endl;
    cout << "Perguruan Tinggi : " << ptrUniv << endl;

    return 0;
}

