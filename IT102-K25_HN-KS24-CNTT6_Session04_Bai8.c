#include<stdio.h>
int main() {
    int a, b, c;
    printf("Nhap canh thu nhat:");
    scanf("%d", &a);
    printf("Nhap canh thu hai:");
    scanf("%d", &b);
    printf("Nhap canh thu ba:");
    scanf("%d", &c);
    if (a + b > c && a + c > b && b + c > a) {
        printf("La 3 canh cua tam giac");
    }else {
        printf("Khong phai 3 canh cua tam giac");
    }
    return 0;
}