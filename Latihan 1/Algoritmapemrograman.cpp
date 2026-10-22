#include <iostream>
using namespace std;

int main(){
	/*variabel*/
	float	luas,tinggi,Pi,v,r;
	
	/*masukkan(input) angka yang dihitung*/
	Pi=3.14;
	r=17;
	tinggi=17;
	
	/*lalu masukkan rumus menghitung volume tabung*/
	v=Pi*r*r*tinggi;
	
	/*Masukkan juga rumus menghitung ruas tabung*/
	luas= 2*Pi*r*(r+tinggi);
	
	/*menampilkan output*/
	
	cout << "volume tabung adalah: " << v <<endl;
	cout << " luas tabung adalah: " << luas <<endl;
}
