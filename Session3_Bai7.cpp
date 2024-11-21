#include <stdio.h>

int main() {
    int soNguyen, tong, hangDonVi, hangChuc, hangTram, hangNghin;

    // Yêu cau nguoi dùng nhap mot so nguyên có 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra neu so không phai là 4 chu so
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Vui long nhap so co 4 chu so.\n");
        return 1;  // Ket thúc chuong trình neu so không hop le
    }

    // Tính tong các chu so trong so dã nhap
    hangNghin = soNguyen / 1000;            // Ch? s? nghìn
    hangTram = (soNguyen / 100) % 10;       // Ch? s? tram
    hangChuc = (soNguyen / 10) % 10;        // Ch? s? ch?c
    hangDonVi = soNguyen % 10;              // Ch? s? don v?

    tong = hangNghin + hangTram + hangChuc + hangDonVi;  // Tong các chu so

    // In ket qua
    printf("Tong cac chu so trong so %d la: %d\n", soNguyen, tong);

    return 0;
}
