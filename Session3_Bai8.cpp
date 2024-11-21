#include <stdio.h>

int main() {
    int soNguyen, nghichDao;

    // Y�u cau nguoi d�ng nhap mot so nguy�n c� 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra neu so kh�ng phai l� 4 chu so
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Vui long nhap so co 4 chu so.\n");
        return 1;  // Ket th�c chuong tr�nh neu so kh�ng hop le
    }

    // T�nh so nghich dao
    nghichDao = 0;
    while (soNguyen != 0) {
        nghichDao = nghichDao * 10 + soNguyen % 10;  // Th�m chu so cuoi v�o nghich dao
        soNguyen = soNguyen / 10;  // Loai bo chu so cuoi
    }

    // In ket qua
    printf("So nghich dao cua so ban nhap la: %d\n", nghichDao);

    return 0;
}
