#include <stdio.h>

int main() {
    int soNguyen, tong, hangDonVi, hangChuc, hangTram, hangNghin;

    // Y�u cau nguoi d�ng nhap mot so nguy�n c� 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra neu so kh�ng phai l� 4 chu so
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Vui long nhap so co 4 chu so.\n");
        return 1;  // Ket th�c chuong tr�nh neu so kh�ng hop le
    }

    // T�nh tong c�c chu so trong so d� nhap
    hangNghin = soNguyen / 1000;            // Ch? s? ngh�n
    hangTram = (soNguyen / 100) % 10;       // Ch? s? tram
    hangChuc = (soNguyen / 10) % 10;        // Ch? s? ch?c
    hangDonVi = soNguyen % 10;              // Ch? s? don v?

    tong = hangNghin + hangTram + hangChuc + hangDonVi;  // Tong c�c chu so

    // In ket qua
    printf("Tong cac chu so trong so %d la: %d\n", soNguyen, tong);

    return 0;
}
