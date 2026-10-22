#include<iostream>
using namespace std;

int main(){
    int Fibo[20], j, suku;
    Fibo[0] = 0;
    Fibo[1] = 1;

    cout << "Masukkan Jumlah Suku (kurang dari 20): ";
    cin >> suku;

    if (suku > 2) { 
        for (j = 2; j < suku; j++) { 
            Fibo[j] = Fibo[j - 1] + Fibo[j - 2];
        }
    }

    for (j = 0; j < suku; j++) { 
        cout << "Fibo[" << j << "] = " << Fibo[j] << endl;
    }

    return 0;
}

