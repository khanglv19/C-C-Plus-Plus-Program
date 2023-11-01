/*Nhập vào chuỗi họ, tên:
- Xuất họ của chuỗi đó.
- Kiểm tra chuỗi trên có phải tên là "Lan".
- Xuất từng thành phần của họ tên: Họ, tên lót, tên.
- Giả sử tên nhập vào đều có tên lót là "Thị" hoặc "Văn". Hãy cho biết tên nhập vào là nam hay nữ? */

/*
- Sử dụng hàm scanf để nhập vào chuỗi họ, tên và lưu vào một mảng kiểu char. Bạn cần sử dụng định dạng %[^\n] để nhập chuỗi có khoảng trắng.
- Sử dụng hàm strtok trong thư viện string.h để tách chuỗi họ, tên thành các thành phần riêng biệt bằng dấu cách. Bạn có thể lưu các thành phần này vào một mảng con trỏ kiểu char.
- Sử dụng hàm strcmp trong thư viện string.h để so sánh chuỗi với tên “Lan”. */

#include <stdio.h>
#include <conio.h>
#include <string.h>

int main()
{
    char name[100];  // Mảng lưu chuỗi họ, tên
    char *parts[10]; // Mảng lưu các thành phần của họ, tên
    int count = 0;   // Biến đếm số lượng thành phần

    printf("Nhap vao chuoi ho, ten: ");
    scanf("%[^\n]", name); // Nhập chuỗi có khoảng trắng

    char *token = strtok(name, " "); // Tách chuỗi theo dấu cách

    while (token != NULL)
    {
        parts[count] = token;      // Lưu thành phần vào mảng
        count++;                   // Tăng biến đếm
        token = strtok(NULL, " "); // Tiếp tục tách chuỗi
    }

    printf("Ho cua chuoi do la: %s\n", parts[0]); // In ra họ

    if (strcmp(parts[count - 1], "Lan") == 0)
    { // So sánh tên với "Lan"
        printf("Chuoi tren co ten la Lan!\n");
    }
    else
    {
        printf("Chuoi tren khong co ten la Lan!\n");
    }

    printf("Cac thanh phan cua ho, ten la: \n");

    for (int i = 0; i < count; i++)
    {
        printf("%s\n", parts[i]); // In ra từng thành phần
    }
    if (strcmp(parts[1], "Thi") == 0)
    { // Kiểm tra tên lót là "Thị"
        printf("Ten nhap vao la nu!\n");
    }
    else if (strcmp(parts[1], "Van") == 0)
    { // Kiểm tra tên lót là "Văn"
        printf("Ten nhap vao la nam!\n");
    }
    else
    {
        printf("Ten nhap vao khong ro nam hay nu!\n");
    }

    return 0;
    getch();
}