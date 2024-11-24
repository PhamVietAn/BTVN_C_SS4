#include <stdio.h>

int main(){
	int num;
	printf("nhap vao so thang cua nam 2024: ");
	scanf("%d",&num);
	
	switch(num){
		case 1:
			printf("thang %d co 31 ngay",num);
			break;
		case 2:
			printf("thang %d co 29 ngay",num);
			break;
		case 3:
			printf("thang %d co 31 ngay",num);
			break;
		case 4:
			printf("thang %d co 30 ngay",num);
			break;
		case 5:
			printf("thang %d co 31 ngay",num);
			break;
		case 6:
			printf("thang %d co 30 ngay",num);
			break;
		case 7:
			printf("thang %d co 31 ngay",num);
			break;
		case 8:
			printf("thang %d co 31 ngay",num);
			break;
		case 9:
			printf("thang %d co 30 ngay",num);
			break;
		case 10:
			printf("thang %d co 31 ngay",num);
			break;
		case 11:
			printf("thang %d co 30 ngay",num);
			break;
		case 12:
			printf("thang %d co 21 ngay",num);
			break;
		default:
			printf("so thang khong hop le");
	}
	
	return 0;
} 
