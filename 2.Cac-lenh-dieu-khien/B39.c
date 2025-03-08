/*Hệ thập lục phân dùng 16 ký số bao gồm các ký tự 0...9 và A, B, C, D, E, F.
Các ký số A, B, C, D, E, F có giá trị tương ứng trong hệ thập phân như sau: A là 10, B là 11, C là 12, D là 13, E là 14, F là 15.
Hãy viết chương trình cho nhập vào ký tự biểu diễn một ký số của hệ thập lục phân và cho biết giá trị thập phân tương ứng.
Trường hợp ký tự nhập vào không thuộc các ký số trên, đưa ra thông báo lỗi: "Hệ thập lục phân không dùng ký số này!".*/

#include <stdio.h>
#include <conio.h>

int hexCharToDecimal(char hexChar)
{
    if (hexChar >= '0' && hexChar <= '9')
    {
        return hexChar - '0';
    }
    else if (hexChar >= 'A' && hexChar <= 'F')
    {
        return hexChar - 'A' + 10;
    }
    else if (hexChar >= 'a' && hexChar <= 'f')
    {
        return hexChar - 'a' + 10;
    }
    else
    {
        return -1; // Không thuộc các ký số hợp lệ
    }
}

int main()
{
    char hexChar;
    printf("Nhap mot ky tu bieu dien ky so he thap luc phan: ");
    scanf(" %c", &hexChar);

    int decimalValue = hexCharToDecimal(hexChar);

    if (decimalValue != -1)
    {
        printf("Gia tri thap phan tuong ung: %d\n", decimalValue);
    }
    else
    {
        printf("He thap luc phan khong dung ky so nay!\n");
    }

    return 0;
}
