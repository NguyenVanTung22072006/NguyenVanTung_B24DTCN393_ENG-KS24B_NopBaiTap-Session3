#include <stdio.h>

int main() {
    char name[100]; // Khai báo m?ng ký t? d? ch?a tên ngu?i dùng

    // Yêu c?u ngu?i dùng nh?p tên
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); // Dùng fgets d? d?c tên, có th? ch?a kho?ng tr?ng

    // In ra loi chào voi tên nguoi dùng
    printf("Xin chào %s", name);

    return 0;
}
