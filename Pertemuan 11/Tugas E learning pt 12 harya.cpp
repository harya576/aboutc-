#include<iostream>
using namespace std;

int main(){
	int data[] = {80, 76, 87, 10, 67, 90, 77, 54, 9, 32};
	int ukuran = sizeof(data) / sizeof(data[0]);
	
	cout<<"Data dalam array yaitu: ";
	for (int i=0; i < ukuran; i++){
		cout<<data[i]<<" ";
	}
	cout<<endl;
	return 0;
} 
