//mencari nilai maksimum
#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	int A[]={10,30,4,8,34,45,43,87,57,12};
	int i=0, max=A[0];
	while(i<=9)
	{
		if(A[i]>=max)max=A[i];
		i++;
	}
	for(i=0; i<=9;i++)
		cout<<setw(3)<<A[i];
		cout<<endl;
		cout<<"max="<<max<<endl;
}
