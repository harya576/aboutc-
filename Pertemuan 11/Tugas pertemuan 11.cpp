#include<iostream>
using namespace std;
int main() {
    int JumlahBilangan = 10;
    float angka, total = 0;
    int i = 1;

    cout << "Menghitung rata-rata dari 10 bilangan" << endl;
    
    for (;i <= JumlahBilangan;){
        cout << "Masukkan angka ke-" << i << ": ";
        cin >> angka;
        total += angka;
        i++;
    }

    
    float rataRata = total / JumlahBilangan;

    cout << "Rata-rata dari 10 bilangan tersebut adalah: " << rataRata << endl;

    return 0;
}

