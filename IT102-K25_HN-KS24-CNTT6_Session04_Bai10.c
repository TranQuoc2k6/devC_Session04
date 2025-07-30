#include<stdio.h>
int main() {
    int number_1, number_2, number_3, temp;
    printf("Nhap so thu nhat:");
    scanf("%d", &number_1);
    printf("Nhap so thu hai:");
    scanf("%d", &number_2);
    printf("Nhap so thu ba:");
    scanf("%d", &number_3);
    if (number_1 > number_2) {
        temp = number_1;
        number_1 = number_2;
        number_2 = temp;
    }
    if (number_2 > number_3) {
        temp = number_2;
        number_2 = number_3;
        number_3 = temp;
    }
    if (number_1 > number_3) {
        temp = number_1;
        number_1 = number_3;
        number_3 = temp;
    }
    printf("%d %d %d", number_1, number_2, number_3);
    return 0;
}