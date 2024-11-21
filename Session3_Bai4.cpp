#include <stdio.h>

int main() {
    // Khai báo các bien de luu tru diem
    float diemToan, diemVan, diemAnh;
    float tongDiem, diemTrungBinh;

    // Nhap diem tu bàn phím
    printf("Nhap diem Toan: ");
    scanf("%f", &diemToan);

    printf("Nhap diem Van: ");
    scanf("%f", &diemVan);

    printf("Nhap diem Anh: ");
    scanf("%f", &diemAnh);

    // Tính tong diem và diem trung bình
    tongDiem = diemToan + diemVan + diemAnh;
    diemTrungBinh = tongDiem / 3;

    // In ket qua
    printf("Tong diem: %.2f\n", tongDiem);
    printf("Diem trung binh: %.2f\n", diemTrungBinh);

    return 0;
}
