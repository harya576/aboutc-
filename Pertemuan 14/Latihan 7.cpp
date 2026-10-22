#include<iostream>
#include<string.h>
using namespace std;

int main(){
	char kalimatA[35];
	char kalimatB[35];
	strcpy(kalimatA,"Kota Tasikmalaya");
	strcpy(kalimatB,kalimat A);
	// ubah semua huruf kecil ke kapital
	strupr(kalimatA);
	cout<<kalimatA<<endl;
	//Ubah semua huruf kapital ke kecil
	strlwr(kalimatA)
	cout<<kalimatA<<endl;
	//Membandingkan dua string
	cout<<strcmp(kalimatA,kalimatB)<<endl;
	//Membandingkan dua string
	cout<<strcmpi(kalimatA,kalimatB)<<endl;
	//menggabungkan string
	strcat(kalimatB,"Never Ending Asia");
	cout<<kalimatB<<endl;
	
}
