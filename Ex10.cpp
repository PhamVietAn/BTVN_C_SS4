#include <stdio.h> 

int main(){
	int num1, num2, num3, var;
	
	printf("nhap vao so nguyen thu nha: ");
	scanf("%d",&num1);
	printf("nhap vao so nguyen thu hai: ");
	scanf("%d", &num2);
	printf("nhap vao so nguyen thu ba: ");
	scanf("%d", &num3);
	
	if(num1>num2){
		var = num1;
		num1 = num2;
		num2 = var;
	}
	if(num1>num3){
		var = num1;
		num1 = num3;
		num3 = var;
	}
	if(num2>num3){
		var = num2;
		num2 = num3;
		num3 = var;
	}
	
	printf("so theo thu tu tang dan: %d, %d, %d",num1, num2, num3);
	
	return 0;
}
