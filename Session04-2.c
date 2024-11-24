#include<stdio.h>
int main(){
	//Buoc1: khai bao bien i
	int i;
	//Buoc2: nhap gia tri cho bien i
	printf("moi ban nhap gia tri: ");
	scanf("%d", &i);
	//Buoc3: neu chia het cho 2 la so chan, khong chia het la so le, bang 0 khong la so chan, khong la so le
	if(i==0){
		printf("khong la so chan, khong la so le");
	}
	else{
		if(i%2==0){
			printf("la so chan");
		}
		else{
			printf("la so le");
		}
	}
	//Buoc4: ket thuc chuong trinh
	return 0;
}
