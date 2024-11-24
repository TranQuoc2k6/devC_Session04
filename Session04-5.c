#include<stdio.h>
int main(){
	//buoc1: khai bao bien a, b, c lan luot la 3 so nguyen 
	int a, b, c;
	//buoc2: nhap gia tri cho 3 bien tren 
	printf("moi ban nhap gia tri cho a=");
	scanf("%d", &a);
	printf("moi ban nhap gia tri cho b=");
	scanf("%d", &b);
	printf("moi ban nhap gia tri cho c=");
	scanf("%d", &c);	
	//buoc3: neu bien thu 3(bien c) nam trong khoang giua bien thu 1(bien a) va bien thu 2(bien b) thi in ra man hinh
	if((c>a&&c<b) || (c<a&&c>b)){
		printf("thoa man");
	}
	else{
		printf("khong thoa man");
	}
	//buoc4: ket thuc chuong trinh
	return 0;
}
