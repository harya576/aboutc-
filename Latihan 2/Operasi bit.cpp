//operasi bit 
#include<iostream>
int main()
{
	int x=185;
	int y=5;
	cout<<"~"<<x<<"="<<~x<<endl;
	cout<<x<<"|" <<y<< "="<<(x|y)<<endl;
	cout<<x<<"&" <<y<< "="<<(x&y)<<endl;
	cout<<x<<"^" <<y<< "="<<(x^y)<<endl;
	cout<<x<<"<<" <<y<< "="<<(x<<y)<<endl;
	cout<<x<<">>" <<y<< "="<<(x>>y)<<endl;
	
}
