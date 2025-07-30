#include<stdio.h>
int main() {
    int number;
    printf("Nhap so tu nhien bat ky: ");
    scanf("%d", &number);
    if (number >0) {
        printf("%d la so duong", number);
    }else if (number == 0) {
        printf("0 khong la so am, khong la so duong", number);
    }else {
        printf("%d la so am", number);
    }
    return 0;
}