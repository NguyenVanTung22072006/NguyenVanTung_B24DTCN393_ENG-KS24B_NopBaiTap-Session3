#include <stdio.h>

int main() {
    char name[100]; // Khai b�o m?ng k� t? d? ch?a t�n ngu?i d�ng

    // Y�u c?u ngu?i d�ng nh?p t�n
    printf("Nhap ten cua ban: ");
    fgets(name, sizeof(name), stdin); // D�ng fgets d? d?c t�n, c� th? ch?a kho?ng tr?ng

    // In ra loi ch�o voi t�n nguoi d�ng
    printf("Xin ch�o %s", name);

    return 0;
}
