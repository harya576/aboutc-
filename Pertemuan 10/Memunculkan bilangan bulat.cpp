#include<iostream>
using namespace std;
int main() {
    int a;
    cout << "menentukan bilangan bulat positif/negatif/nol \n";
    cout << "masukkan bilangan : "; cin >> a;
    
    if ( a == 0 )
        cout << "bilangan nol " << endl;
    else if ( a % 2 == 0 && a > 0 )
        cout << "bilangan genap positif " << endl;
    else if ( a % 2 == 0 && a < 0 )
        cout << "bilangan genap negatif " << endl;
    else if ( a % 2 != 0 && a > 0 )
        cout << "bilangan ganjil positif " << endl;
    else
        cout << "bilangan ganjil negatif " << endl;
    
    return 0;
}
