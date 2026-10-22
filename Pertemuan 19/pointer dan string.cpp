#include<iostream>
#include<iomanip>
using namespace std;

int main(){
	// menghitung huruf besar dan kecil dengan array pointer
	char kalimat[]= {"Welcome to my program c++"};
	char *pKarakter;
	
	int JumlahHurufKecil = 0;
	int JumlahHurufBesar = 0;
	pKarakter = kalimat;
	while(*pKarakter){
		char kar = *pKarakter;
		if(kar >= 'a' && kar <= 'z')
			JumlahHurufKecil++;
		if(kar >= 'A' && kar <= 'Z')
			JumlahHurufBesar++;
		pKarakter++;
	}
	cout<<"Jumlah Huruf Kecil : "<<JumlahHurufKecil<<endl;
	cout<<"Jumlah Huruf Besar : "<<JumlahHurufBesar<<endl;
	
}
