#include<stdio.h>
int main(){
	//buoc1: khai bao bien month
	int month;
	//buoc2: nhap gia tri cho bien month
	printf("nhap thang cua nam 2025: ");
	scanf("%d", &month);
	//buoc3: hien thi ra so ngay trong bien month 
	switch(month){
		case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
			printf("co 31 ngay");
			break;
		case 2:
			printf("co 28 ngay");
			break;
		case 4 : case 6 : case 9 : case 11:
			printf("co 30 ngay");
			break;
		default:
			printf("so thang khong hop le");		
	}
	//buoc4: ket thuc chuong trinh
	return 0;
}
