#include <iostream>
using namespace std;
int main() 
{
    float a = 10, b = 8, c = 6, d = 4;
    cout << "Bilangan yang diinput: " << a << ", " << b << ", " << c << ", " << d << endl;

    int terbesar = a; 
    if (b > terbesar) {
        terbesar = b;
    }
    if (c > terbesar) {
        terbesar = c;
    }
    if (d > terbesar) {
        terbesar = d;
    }
    cout<< "Bilangan terbesar : "<<terbesar<<endl;
    return 0;
}
