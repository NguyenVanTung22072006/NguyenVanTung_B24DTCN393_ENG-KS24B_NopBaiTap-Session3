#include <stdio.h>

int main() {
    float celsius, fahrenheit;

    // Yêu cau nguoi dùng nhap nhiet do theo do Celsius
    printf("Nhap nhiet do theo do Celsius: ");
    scanf("%f", &celsius);

    // Chuyen doi Celsius sang Fahrenheit
    fahrenheit = (celsius * 9 / 5) + 32;

    // Hien thi ket qua
    printf("%.2f do Celsius bang %.2f do Fahrenheit.\n", celsius, fahrenheit);

    return 0;
}
