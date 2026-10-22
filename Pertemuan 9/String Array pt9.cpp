#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main ()
{
	string superhero[5] = {"Thor","Ironman","Captain America","Hulk","Antman"};
	srand(time(NULL));
	int acak=rand()%4+1;
	cout<<"Hasil="<<superhero[acak]<<endl;
}
