#include<stdio.h>

int main(){
	float num1, num2, ketqua;
	int choice;
	
	printf("Nhap so thu nhat: ");
	scanf("%f", &num1);
	printf("Nhap so thu hai: ");
	scanf("%f", &num2);
	
	do{
		printf("\nCALCULATOR\n");
		printf("1. Tong 2 so\n");
		printf("2. Hieu 2 so\n");
		printf("3. Tich 2 so\n");
		printf("4. Thuong 2 so\n");
		printf("5. Thoat\n");
		printf("Lua chon cua ban\n");
		scanf("%f", &choice);
		switch (choice){
			case 1: ketqua = num1 + num2;
			      printf("Tong 2 so la: %.2f\n",ketqua);
			      break;
			case 2: ketqua = num1 - num2;
			      printf("Hieu 2 so la: %.2f\n",ketqua);
			      break;
		    case 3: ketqua = num1 * num2;
		          printf("Tich 2 so la: %.2f\n",ketqua);
		          break;
		    case 4:
		          if (num2 !=0){
		          	ketqua = num1 / num2;
		          	printf("Thuong cua 2 so la: %.2f\n",ketqua);
				  }else{
				  	printf("Khong th chia cho 0 \n");
				  }
				  break;
			case 5:
				  printf("Thoat chuong trinh \n");
				  break;
			default:
				printf("Lua cho khong hop le. Vui long chon lai \n");
		}
	} while (choice !=5);
	 
	return 0; 
} 
