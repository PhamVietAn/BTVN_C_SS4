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
		printf("gia dien: %.0f (VND/kWh)", total*10000);
	}else if(total<100){
		printf("gia dien: %.0f (VND/kWh)", total*15000);
	}else if(total<150){
		printf("gia dien: %.0f (VND/kWh)", total*20000);
	}else if(total<200){
		printf("gia dien: %.0f (VND/kWh)", total*25000);
	}else{
		printf("gia dien: %.0f (VND/kWh)", total*30000);
	}
	 
	return 0; 
}
