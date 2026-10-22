#include<iostream>
#define JML_MHS 10
#define JML_MK 5
using namespace std;

int main(){
	int i, k;
	int *pNilaiMHS[JML_MHS],NILAI[JML_MHS][JML_MK];
	FILE *pF;
	for(i = 0; i<=JML_MHS-1; i++){
		pNilaiMHS[i] = NILAI[i];
		
	}
	if ((pF=fopen("C:\\c++\\dat.txt","r"))==NULL){
 	printf("File tidak dapat dibuka\n");
 	}
 	else {
 		for(i=0; i < JML_MHS; i++)
 			for(k=0; k <JML_MK; k++)
 				 fscanf(pF,"%d",&NILAI[i][k]);
	 }
	 	for(i=0; i < JML_MHS; i++){
	 		for(k=0; k <JML_MK; k++){
	 			printf("%d ",*pNilaiMHS[i]++);
			 }
			 printf("\n");
		 }
		 fclose(pF);
}
