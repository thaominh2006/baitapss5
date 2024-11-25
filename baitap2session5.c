#include<stdio.h>

int main (){
	int number = 10;
	int sobatky;
	do{
		printf("Nhap so nguyen bat ky: ");
		scanf("%d", &sobatky); 
	} while(sobatky!=number);
	 
	return 0; 
} 
