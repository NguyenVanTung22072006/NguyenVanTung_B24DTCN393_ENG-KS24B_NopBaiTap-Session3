#include <stdio.h>

int main() {
    int soNguyen, nghichDao;

    // Yêu cau nguoi dùng nhap mot so nguyên có 4 chu so
    printf("Nhap mot so nguyen co 4 chu so: ");
    scanf("%d", &soNguyen);

    // Kiem tra neu so không phai là 4 chu so
    if (soNguyen < 1000 || soNguyen > 9999) {
        printf("Vui long nhap so co 4 chu so.\n");
        return 1;  // Ket thúc chuong trình neu so không hop le
    }

    // Tính so nghich dao
    nghichDao = 0;
    while (soNguyen != 0) {
        nghichDao = nghichDao * 10 + soNguyen % 10;  // Thêm chu so cuoi vào nghich dao
        soNguyen = soNguyen / 10;  // Loai bo chu so cuoi
    }

    // In ket qua
    printf("So nghich dao cua so ban nhap la: %d\n", nghichDao);

    return 0;
}
