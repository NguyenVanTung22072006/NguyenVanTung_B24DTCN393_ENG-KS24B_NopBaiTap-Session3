#include <stdio.h>

int main() {
    float canhDay, chieuCao, dienTich;

    // Yêu cau nguoi dùng nhap vào do dài canh dáy và chieu cao cua tam giác
    printf("Nhap do dai canh day cua tam giac: ");
    scanf("%f", &canhDay);
    printf("Nhap do cao cua tam giac: ");
    scanf("%f", &chieuCao);

    // Tính dien tích cua tam giác
    dienTich = 0.5 * canhDay * chieuCao;

    // In ket qua dien tích ra màn hình
    printf("Dien tich tam giac la: %.2f\n", dienTich);

    return 0;
}
