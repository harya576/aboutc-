//Harya Rachmat Suzana 01TPLP035 241011401798
#include<iostream>
using namespace std;
int main (){
	float totalBelanja, diskon, totalBayar;
	
	cout<< "Masukkan total belanja: ";
	cin >> totalBelanja;
	
	if(totalBelanja >= 850000) {
		diskon = 0.4; 
	} else if(totalBelanja >= 550000){
		diskon = 0.3;
	} else if(totalBelanja >= 270000){
		diskon = 0.04;
	} else {
		diskon = 0;
	}
	
	float jumlahDiskon = totalBelanja * diskon;
	totalBayar = totalBelanja - jumlahDiskon;
	
	cout<<"Total belanja: Rp" <<totalBelanja << endl;
	cout<<"Diskon: Rp" <<jumlahDiskon << " (" << diskon *  100 << "%)" << endl;
	cout<<"Total yang harus dibayarkan: Rp" << totalBayar << endl;
	
	return 0;
}
