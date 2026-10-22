#include<iostream>
using namespace std;

int main(){
	int i=0,a[5];
	//Baca data dari kb (i<5)
	while(i<5)
	{
		cout<<"a["<<i<<"]=";
		
		cin>>a[i];
		i++;
		
	}
	//cetak data 
	cout<<endl<<"Isi array a adalah :"<<endl;
	for(i=0;i<=5;i++)
		cout<<"a["<<i<<"]="<<a[i]<<endl;
}
