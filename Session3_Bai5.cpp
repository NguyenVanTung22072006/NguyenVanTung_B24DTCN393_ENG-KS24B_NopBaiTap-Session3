#include <stdio.h>
#include <string.h>

int main() {
    // Khai báo mang chua thông tin sinh viên
    char* hoTen[] = {
        "Nguyen Van A", "Nguyen Van B", "Nguyen Van C", "Nguyen Van D", 
        "Nguyen Van E", "Nguyen Van F", "Nguyen Van G", "Nguyen Van H", 
        "Nguyen Van I", "Nguyen Van K"
    };
    int tuoi[] = {20, 21, 18, 19, 22, 21, 23, 19, 18, 21};
    char* soDienThoai[] = {
        "0904488481", "0904488482", "0904488483", "0904488484", "0904488485", 
        "0904488486", "0904488487", "0904488488", "0904488489", "0904488480"
    };
    char* email[] = {
        "anv@rikkeiacademy.com", "bnv@rikkeiacademy.com", "cnv@rikkeiacademy.com", 
        "env@rikkeiacademy.com", "fng@rikkeiacademy.com", "fvn@rikkeiacademy.com", 
        "gnv@rikkeiacademy.com", "hnv@rikkeiacademy.com", "inv@rikkeiacademy.com", 
        "knv@rikkeiacademy.com"
    };

    // Can giua "DANH SACH SINH VIEN"
    char title[] = "DANH SACH SINH VIEN";
    int len = strlen(title);
    int spaces = (70 - len) / 2;  // Can giua voi do rong là 70 ký tu

    // In tiêu de can giua
    for (int i = 0; i < spaces; i++) {
        printf(" ");  // In các khoang trang de can giua
    }
    printf("%s\n", title);

    // In dòng gach ngang phân cách tiêu de
    printf("|-----|--------------|------|---------------|-----------------------|\n");

    // In tiêu de bang
    printf("| STT | Ho va ten    | Tuoi | So dien thoai | email                 |\n");

    // In dòng gach ngang phân cách
    printf("|-----|--------------|------|---------------|-----------------------|\n");

    // In danh sách sinh viên
    for (int i = 0; i < 10; i++) {
        printf("| %3d | %-12s | %-4d | %-13s | %-20s |\n", i+1, hoTen[i], tuoi[i], soDienThoai[i], email[i]);
        
        // In dòng gach ngang phân cách sau moi sinh viên
        printf("|-----|--------------|------|---------------|-----------------------|\n");
    }

    return 0;
}
