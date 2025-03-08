/*Nhập vào 1 ký tự, kiểm tra ký tự đó có thuộc 26 chữ cái tiếng Anh hay không.*/

/* Chúng ta có thể sử dụng hàm scanf để nhập vào 1 ký tự và lưu vào một biến kiểu char. Sau đó, chúng ta có thể sử dụng hàm isalpha trong thư viện ctype.h để kiểm tra xem ký tự đó có phải là một chữ cái tiếng Anh hay không. Hàm isalpha trả về giá trị khác 0 nếu ký tự đó là một chữ cái tiếng Anh và trả về 0 nếu không phải. Chúng ta có thể in ra kết quả bằng hàm printf. */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &c);

    if (isalpha(c))
    {
        printf("Ky tu %c thuoc 26 chu cai tieng Anh\n", c);
    }
    else
    {
        printf("Ky tu %c khong thuoc 26 chu cai tieng Anh\n", c);
    }
    return 0;
}
