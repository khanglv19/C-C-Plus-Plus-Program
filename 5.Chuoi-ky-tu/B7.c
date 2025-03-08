// Đếm số các ký tự đặc biệt (không phải ký tự và ký số) trong chuỗi.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm đếm số ký tự đặc biệt
int countSpecialChars(const char *str)
{
    int count = 0;
    while (*str)
    {
        if (!isalnum(*str) && !isspace(*str) && *str != '\n')
        {
            count++;
        }
        str++;
    }
    return count;
}

int main()
{
    char str[200];

    // Nhập chuỗi
    printf("Nhap chuoi: ");

    if (fgets(str, sizeof(str), stdin) == NULL || str[0] == '\0')
    {
        printf("Loi khi nhap chuoi!\n");
        return 1;
    }

    // Đếm ký tự đặc biệt
    int specialCharCount = countSpecialChars(str);
    printf("So ky tu dac biet trong chuoi: %d\n", specialCharCount);

    return 0;
}