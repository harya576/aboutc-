#include<iostream>
using namespace std;

int main(){
	int *P;
	int A[5] = {2, 1, 0, 7, 5};
	
	P = A;
	cout<<*P++<<endl;
	P++;
	
	cout<<*P<<endl;
}
