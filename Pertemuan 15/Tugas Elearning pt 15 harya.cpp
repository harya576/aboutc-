#include <iostream>
using namespace std;

int main() {
    int n, a = 0, b = 1, fib = 0;

    cout << "Masukkan jumlah bilangan fibonacci : ";
    cin >> n;

    cout << "Bilangan Fibonacci: ";

    int count = 0; 
    while (count < n) {
        if (count <= 1) {
            fib = count; 
        } else {
            fib = a + b; 
            a = b;
            b = fib;
        }
        cout << fib << " ";
        count++;
    }

    cout << endl;
    return 0;
}


