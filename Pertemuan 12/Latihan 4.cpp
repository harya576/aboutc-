#include <iostream>
using namespace std;

int main() {
    int suku = 1; 

    cout << "suku pertama dari 10 ialah : ";
    for (int i = 0; i < 10; i++) {
        cout << suku << " ";
        suku += 2; 
    }

    return 0;
}

