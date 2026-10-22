#include<iostream>
using namespace std;
main (void)
{
	double NilaiUjian;
	char skor;
	cout<<"Masukkan NilaiUjian: ";
	cin>>NilaiUjian;
	if(NilaiUjian>=90) skor='A';
		else
	if(NilaiUjian>=70) skor='B';
		else
	if(NilaiUjian>=60) skor='C';
		else
	if(NilaiUjian>=50) skor='D';
		else
		skor='E'; cout<<"Skor:"<<skor<<endl;
	
}
