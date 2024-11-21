#include <stdio.h>
#define PI 3.14159  // Ðinh nghia hang so PI

int main() {
    float r, chuVi, dienTich;

    // Yêu cau nguoi dùng nhap bán kính hình tròn
    printf("Nhap ban kinh hinh tron: ");
    scanf("%f", &r);

    // Tính chu vi và dien tích
    chuVi = 2 * PI * r;
    dienTich = PI * r * r;

    // Hien thi ket qua voi 2 chu so thap phân
    printf("Chu vi hinh tron la: %.2f\n", chuVi);
    printf("Dien tich hinh tron la: %.2f\n", dienTich);

    return 0;
}
