// Đảo ngược chuỗi.

#include <stdio.h>
#include <conio.h>
#include <string.h>

// Hàm đảo ngược chuỗi
void reverseString(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        char temp = str[i];
        str[i] = str[len - i - 1];
        str[len - i - 1] = temp;
    }
}

int main()
{
    char a[100]; // khai bao chuoi a có toi da 100 ky tu

    printf("Nhap vao chuoi ky tu: ");
    fgets(a, sizeof(a), stdin);

    printf("Chuoi ly tu vua nhap la: %s", a);

    // strrev(a); // ham strrev() co san trong thu vien string.h

    reverseString(a);
    printf("\nChuoi theo chieu dao nguoc: %s", a);

    return 0;
}