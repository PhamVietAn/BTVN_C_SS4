#include <stdio.h>

int main(){
	int day, month, year, maxDay;
	
	printf("nhap ngay: ");
	scanf("%d",&day);
	printf("nhap thang: ");
	scanf("%d",&month);
	printf("nhap nam: ");
	scanf("%d",&year);
	
	if(year<1){
		printf("nam khong hop le");
	}else if(month<1 || month>12){
		printf("thang khong hop le");
	}else{
		switch(month){
			case 1:
				maxDay = 31;
			break;
			case 3:
				maxDay = 31;
			break;
			case 5:
				maxDay = 31;
			break;
			case 7:
				maxDay = 31;
			break;
			case 8:
				maxDay = 31;
			break;
			case 10:
				maxDay = 31;
			break;
			case 12:
				maxDay = 31;
			break;
			case 4:
				maxDay = 30;
			break;
			case 6:
				maxDay = 30;
			break;
			case 9:
				maxDay = 30;
			break;
			case 11:
				maxDay = 30;
			break;
			case 2:
				if((year%4==0 && year%100!=0) || (year%400==0)){
					maxDay = 29;
				}else{
					maxDay = 28;
				}
			break;
		}
	}
	
	if(day<1 || day>maxDay){
		printf("ngay %d/%d/%d khong hop le",day,month,year);
	}else{
		printf("ngay %d/%d/%d hop le",day,month,year);
	}
	
	return 0;
}
