#include<stdio.h>
int main(){
	//buoc1: khai bao bien chiSocu, chiSoMoi, soDien, tienTien
	int chiSoCu, chiSoMoi, soDien;
	float tienDien;
	//buoc2: nhap gia tri cho bien chiSoCu va chiSoMoi tu ban phim
	printf("chi so cong to dien o dau thang la: ");
	scanf("%d", &chiSoCu);
	printf("chi so cong to dien o cuoi thang la: ");
	scanf("%d", &chiSoMoi);
	//buoc3: xu li tinh toan tinh ra so dien 
	soDien = chiSoMoi-chiSoCu;
	//buoc4: xu li tinh toan tinh ra so tien
	if(soDien>=0 && soDien<50){
		tienDien= 10000*soDien;
	} else if (soDien>=50 && soDien<100){
		tienDien= 10000*50 + (soDien-50)*15000;
	} else if (soDien>=100 && soDien<150){
		tienDien= 10000*50 + 15000*50 + (soDien-100)*20000;
	} else if (soDien>=150 && soDien<200){
		tienDien= 10000*50 + 15000*50 + 20000*50 + (soDien-150)*25000;
	} else{
		tienDien= 10000*50 + 15000*50 + 20000*50 + 25000*50 + (soDien-200)*30000;
	}
	//buoc5: hien ra man hinh
	printf("tien dien tieu thu trong thang la: %.2fVND", tienDien);
	//buoc6: ket thuc chuong trinh
	return 0;
}
