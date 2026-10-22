#include <iostream>
#include <cmath>
using namespace std;

int main() {
    cout << "10 suku pertama dari deret kelipatan 2: ";
    for (int i = 0; i < 10; i++) {
        int suku = pow(2, i);
        cout << suku << " ";
    }

    return 0;
}

