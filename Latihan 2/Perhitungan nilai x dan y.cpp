#include<iostream>
using namespace std;
main (void)

{
	int x,y;
	x= 5;
	y= 8- x++;
	cout<<x<<endl;
	cout<<y<<endl;
	x= 5;
	y= 8- ++x;
	cout<<x<<endl;
	cout<<y<<endl;
	x= 5;
	y= 8- x--;
	cout<<x<<endl;
	cout<<y<<endl;
	
	x= 5;
	y= 8 - --x;
	cout<<x<<endl;
	cout<<y<<endl;
	
	
}
