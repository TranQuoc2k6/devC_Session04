#include <stdio.h>
int main() {
    int firstIndex, finalIndex, electricNumber;

    printf("Nhap so cong to dien o dau thang: ");
    scanf("%d", &firstIndex);

    printf("Nhap so cong to dien o cuoi thang: ");
    scanf("%d", &finalIndex);

    electricNumber = finalIndex - firstIndex;

    if (electricNumber >= 200) {
        electricNumber = electricNumber * 30000;
        printf("%d", electricNumber);
    } else if (electricNumber < 200 && electricNumber >= 150) {
        electricNumber = electricNumber * 25000;
        printf("%d", electricNumber);
    } else if (electricNumber < 150 && electricNumber >= 100) {
        electricNumber = electricNumber * 20000;
        printf("%d", electricNumber);
    } else if (electricNumber < 100 && electricNumber >= 50) {
        electricNumber = electricNumber * 15000;
        printf("%d", electricNumber);
    } else {
        electricNumber = electricNumber * 10000;
        printf("%d", electricNumber);
    }
    return 0;
}