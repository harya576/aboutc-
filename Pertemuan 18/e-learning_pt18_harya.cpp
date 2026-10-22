#include<iostream>
#include <cmath>
using namespace std;

int main() {
	double r = 5.0;
	double t = 12.0;
	double volume, luas;
	
	volume = M_PI * r * r * t;
	luas = 2 * M_PI * r * (r + t);
	
	cout<<"Untuk jari jari = "<<r<<"serta tinggi = "<<t<<" : "<<endl;
	cout<<"Volume tabung : "<<volume<<"satuan kubik"<<endl;
	cout<<"Luas permukaan tabung: "<<luas<<" satuan persegi "<<endl;
	
	return 0;
}
