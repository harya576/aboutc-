#include<iostream>
using namespace std;
int main(){
	int JumlahBilangan = 10;
	float angka, total= 0;
	cout << "Hitung rata-rata  10 bilangan" << endl;

    // Input 10 angka dari keyboard
    for (int i = 1; i <= jumlahBilangan; i++) {
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;
        total += angka;
    }

    // Hitung rata-rata
    float rataRata = total / jumlahBilangan;

    // Tampilkan hasil
    cout << "Rata-rata dari 10 bilangan tersebut adalah: " << rataRata << endl;

    return 0;
	
}
