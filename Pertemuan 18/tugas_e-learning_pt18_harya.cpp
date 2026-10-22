#include <iostream>
using namespace std;

int main() {
    int m = 2, n = 2;

    int matriksA[2][2] = {{10, 30}, {39, 50}};
    int matriksB[2][2] = {{68, 77}, {44, 96}};
    int hasil[2][2];

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            hasil[i][j] = matriksA[i][j] + matriksB[i][j];
        }
    }

    cout << "Matriks A:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriksA[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nMatriks B:" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matriksB[i][j] << " ";
        }
        cout << endl;
    }

    cout << "\nNilai hasil penjumlahannya ialah :" << endl;
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << hasil[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}

