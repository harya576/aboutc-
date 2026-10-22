#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int A[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int B[10];
    int i; 

    for (i = 0; i <= 9; i++) 
        B[i] = A[9 - i];

    cout << "A[i] ="; 
    for (i = 0; i <= 9; i++)  
        cout << setw(4) << A[i];
    cout << endl;

    cout << "B[i] =";
    for (i = 0; i <= 9; i++)  
        cout << setw(4) << B[i];
    cout << endl;

    return 0;
}


