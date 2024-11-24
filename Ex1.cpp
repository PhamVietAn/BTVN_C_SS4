#include <stdio.h>

int main(){
	int num;
	printf("nhap vao mot so nguyen: ");
	scanf("%d",&num);
	
	if(num>0){
		printf("%d la so duong", num);
	}else{
		printf("%d la so am", num);
	}
	
	return 0;
} 
