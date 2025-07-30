#include <stdio.h>
int main() {
    int number;
    printf("Nhap vao so nguyen bat ky:");
    scanf("%d", &number);
    if (number % 3 == 0 && number % 5 == 0) {
        printf("%d la so chia het cho 3 va 5", number);
    }else if (number % 3 == 0) {
        printf("%d la so chia het cho 3", number);
    }else if (number % 5 == 0) {
        printf("%d la so chia het cho 5", number);
    }else {
        printf("%d la so khong chia het cho 3 va 5", number);
    }
    return 0;
}