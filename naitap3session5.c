#include<stdio.h>

int main(){
	int n, sum;
	printf("Nhap so vong lap: ");
	scanf("%d", &n);
	for(int i=0; i<=n;i++){
		sum +=i; 
	} 
	printf("Tong: %d", sum); 
	return 0; 
} 
