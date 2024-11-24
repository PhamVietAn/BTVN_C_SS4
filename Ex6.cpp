#include <stdio.h>

int main(){
	float oldElecNum, newElecNum, total;
	
	printf("nhap vao so dien cu: ");
	scanf("%f",&oldElecNum);
	
	printf("nhap vao so dien moi: ");
	scanf("%f",&newElecNum);
	
	total = newElecNum - oldElecNum;
	printf("da su dung %.0f so dien\n",total);
	
	if(total>=0 && total<50){
		printf("gia dien: 10.000 (VND/kWh)");
	}else if(total<100){
		printf("gia dien: 15.000 (VND/kWh)");
	}else if(total<150){
		printf("gia dien: 20.000 (VND/kWh)");
	}else if(total<200){
		printf("gia dien: 25.000 (VND/kWh)");
	}else{
		printf("gia dien: 30.000 (VND/kWh)");
	}
	 
	return 0; 
}
