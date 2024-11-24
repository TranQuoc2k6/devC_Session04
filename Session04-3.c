#include<stdio.h>
int main(){
	//Buoc1: khai bao bien i
	int i;
	//Buoc2: nhap gia tri cho bien i
	printf("moi ban nhap gia tri ");
	scanf("%d", &i);
	//Buoc3: neu gia tri do chia het cho 3 in ket qua ra man hinh "chia het cho 3" ; 
	//       neu gia tri do chia het cho 5 in ket qua ra man hinh "chia het cho 5" ; 
	//       neu gia tri do chia het cho 3 va 5 in ket qua ra man hinh "chia het cho 3 va 5";
	if(i%3==0 && i%5!=0){
		printf("chia het cho 3");
	}
	else{
		if(i%5==0 && i%3!=0){
			printf("chia het cho 5");
		}		
		else{
			if(i%3==0 && i%5==0){
				printf("chia het cho 3 va 5");
			}
			else{
				printf("khong chia het ");
			}
		}
	}		
	//Buoc4: ket thuc chuong trinh
	return 0;
}

