// Đếm số từ trong chuỗi.

#include <stdio.h>
#include <string.h>
#include <ctype.h>

// Hàm chuẩn hóa chuỗi
void trimAndNormalize(char *str)
{
    int i = 0, j = 0;
    int len = strlen(str);

    // Bỏ khoảng trắng đầu chuỗi
    while (i < len && isspace(str[i]))
        i++;

    // Duyệt chuỗi và loại bỏ khoảng trắng thừa
    for (; i < len; i++)
    {
        if (!isspace(str[i]) || (j > 0 && !isspace(str[j - 1])))
        {
            str[j++] = str[i];
        }
    }

    // Bỏ khoảng trắng cuối chuỗi
    while (j > 0 && isspace(str[j - 1]))
        j--;

    str[j] = '\0';
}

// Hàm đếm số từ trong chuỗi
int countWords(const char *str)
{
    int count = 0;
    int inWord = 0;

    while (*str)
    {
        if (isspace(*str))
        {
            inWord = 0;
        }
        else if (!inWord)
        {
            inWord = 1;
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
    fgets(str, sizeof(str), stdin);

    // Xóa ký tự xuống dòng của fgets
    str[strcspn(str, "\n")] = 0;

    // Chuẩn hóa chuỗi
    trimAndNormalize(str);

    // In chuỗi đã chuẩn hóa
    printf("Chuoi sau khi chuan hoa: '%s'\n", str);

    // Đếm số từ
    int wordCount = countWords(str);
    printf("So tu trong chuoi: %d\n", wordCount);

    return 0;
}