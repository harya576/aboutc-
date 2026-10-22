#include <iostream>
using namespace std;
int main () {
	
	//membuat variabel
	string name;
	int age;
	
	//lalu inputkan variabelnya
	cout << "Harya Rachmat Suzana: ";
	getline(cin, name);
	
	//inputkan juga usia
	cout <<"19: ";
	cin >> age;
	
	// menampilan output hasil
	cout<< "Harya Rachmat Suzana: " << name << endl;
	cout<< "19: " << age << "tahun" << endl;
	
	return 0;
}
