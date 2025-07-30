#include<stdio.h>
int main() {
    int day, month, year;

    printf("Nhap ngay:");
    scanf("%d", &day);

    printf("Nhap thang:");
    scanf("%d", &month);

    printf("Nhap nam:");
    scanf("%d", &year);

    switch (month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12: {
            if (day >31 || day < 1) {
                printf("Ngay khong hop le");
            }else {
                printf("%d/%d/%d", day, month, year);
            }
            break;
        }
        case 4: case 6: case 9: case 11: {
            if (day > 30 || day < 1) {
                printf("Ngay khong hop le");
            }else {
                printf("%d/%d/%d", day, month, year);
            }
            break;
        }
        case 2: {
            if (day > 29 || day < 1) {
                printf("Ngay khong hop le");
            }else {
                printf("%d/%d/%d", day, month, year);
            }
            break;
        }
    }
    return 0;
}