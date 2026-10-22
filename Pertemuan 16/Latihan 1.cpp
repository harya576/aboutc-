#include<iostream>
using namespace std;

int main(){
    char hurup[] = {'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T'};
    int i, j;
    for(i = 0; i <= 10; i++) 
    {
        for(j = 0; j <= i; j++) 
            cout << hurup[j];   
        cout << endl;           
    }
    return 0;
}

