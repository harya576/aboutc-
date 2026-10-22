#include<iostream>
using namespace std;

int main() {
	int i,j,a[2][3];
	//Baca data dari kb
	for(i=0;i<=1;i++)
	{
		for(j=0;j<=2;j++)
	 	{
	 		cout<<"a["<<i<<"]["<<j<<"]=";
	 					cin>>a[i][j];
		 }
	}
	//Cetak data 
	cout<<endl<<"Isi array a adalah :"<<endl;
	for(i=0;i<=1;i++)
		for(j=0;j<=2;j++)
		
		cout<<"a["<<i<<"]["<<j<<"]="<<a[i][j]<<endl;
}
