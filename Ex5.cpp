#include <stdio.h>

int main(){
	int num1, num2, num3;
	printf("nhap vao so nguyen thu nhat: ");
	scanf("%d",&num1);
	
	printf("nhap vao so nguyen thu hai: ");
	scanf("%d",&num2);
	
	printf("nhap vao so nguyen thu ba: ");
	scanf("%d",&num3);
	
	if((num3>num1 && num3<num2) || (num3<num1 && num3>num2)){
		printf("so %d nam giua so %d va %d", num3, num1, num2);
	}else{
		printf("so %d khong nam giua so %d va %d", num3, num1, num2);
	}
	return 0;
}
