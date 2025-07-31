#include<stdio.h>
int main() {
    int day, month, year;

    printf("Nhap ngay:");
    scanf("%d", &day);

    printf("Nhap thang:");
    scanf("%d", &month);

    printf("Nhap nam:");
    scanf("%d", &year);

    if (year > 0) {
        if (month > 0 && month <= 12) {
            switch (month) {
                case 1: case 3: case 5: case 7: case 8: case 10: case 12:
                    if (day > 0 && day <= 31) {
                        printf("%d/%d/%d", day, month, year);
                    }else {
                        printf("Ngay thang nam khong hop le 1");
                    }
                    break;
                case 4: case 6: case 9: case 11: case 13:
                    if (day > 0 && day <= 30) {
                        printf("%d/%d/%d", day, month, year);
                    }else {
                        printf("Ngay thang nam khong hop le 2");
                    }
                    break;
                case 2:
                    if (year % 400 == 0 || year % 4 == 0 && year % 100 != 0) {
                        if (day > 0 && day <= 29) {
                            printf("%d/%d/%d", day, month, year);
                        }
                    }else {
                        if (day > 0 && day <= 28) {
                            printf("%d/%d/%d", day, month, year);
                        }
                    }
                    break;
            }
        }else {
            printf("Ngay thang nam khong hop le 3");
        }
    }else {
        printf("Ngay thang nam khong hop le 4");
    }
    return 0;
}
