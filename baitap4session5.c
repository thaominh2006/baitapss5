#include<stdio.h>

int main(){
	int n;
	printf("Nhap so nguyen tu (1-10): ");
	scanf("%d", &n);
	if (n<0 || n>10){
		printf("Nhap so nguyen khong hop le");
		return 1; 
	} else {
		printf("Bang cuu chuong cua %d \n",n);
		for(int i=1; i<=10;i++){
			printf("%d x %d = %d \n",n,i,n*i); 
		} 
	} 
	return 0; 
} 
