#include <iostream>
using namespace std;
main (void) 
{
    int a  , b , c  , d  ;
    cout << "Masukkan bilangan bulat: ";
	cin >> a >> b >> c>> d;
	
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
    
    cout << "Bilangan terbesarnya ialah: " << terbesar << endl;
}
