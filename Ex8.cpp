#include <stdio.h>

int main(){
	int A, B, C;
	printf("nhap vao diem A: ");
	scanf("%d",&A);
	
	printf("nhap vao diem B: ");
	scanf("%d",&B);
	
	printf("nhap vao diem C: ");
	scanf("%d",&C);
	
	if((A>0 && B>0 && C>0) && (A+B>C && A+C>B && B+C>A)){
		printf("ba diem %d %d %d la ba canh cua tam giac", A, B, C);
	}else{
		printf("ba diemr %d %d %d khong phai ba canh cua tam giac", A, B, C);
	}
	
	return 0;
}
