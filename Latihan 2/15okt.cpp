#include<iostream>
using namespace std;
main(void)
{
	float
	PI=3.14,R,L,K,V;
	cout<<" Masukkan harga R : "<<endl;
	cin>>R;
	K=2*PI*R;
	L=4*PI*R*R;
	V=4*PI*R*R*R/4;
	
	cout<<"Keliling : "<<R<<endl;
	cout<<"Luas : "<<L<<endl;
	cout<<"Volume : "<<V<<endl;
}
