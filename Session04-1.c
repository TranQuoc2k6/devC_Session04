#include<stdio.h>
int main(){
	//Buoc1: Khai bao bien i 
	int i;
	//Buoc2: Nhap gia tri cho bien i
	printf("moi ban nhap gia tri: ");
	scanf("%d", &i);
	//Buoc3: Neu gia tri do nhan voi 1 nho hon 0 thi la so am , lon hon 0 la so duong, bang 0 thi khong la so am khong la so duong
	if(i==0){
		printf("khong la so le, khon la so chan");
	}
	else{
		if(i*1>0){
			printf("la so duong");
		}
		else{
			printf("la so am");
		}
    }
	//Buoc4: Ket thuc chuong trinh
	return 0;
}
