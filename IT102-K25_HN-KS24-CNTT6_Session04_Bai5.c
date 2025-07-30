#include<stdio.h>
#include<stdio.h>
int main(){
    int num1,num2,num3;

    printf("Moi ban nhap so thu nhat: ");
    scanf("%d", &num1);

    printf("Moi ban nhap so thu hai: ");
    scanf("%d", &num2);

    printf("Moi ban nhap so thu ba: ");
    scanf("%d", &num3);

    if(num3 >= num1 && num3 <= num2) {
        printf("%d co trong khoang %d - %d", num3, num1, num2);
    } else {
        printf("%d khong trong khoang %d - %d", num3, num1, num2);
    }

    return 0;
}