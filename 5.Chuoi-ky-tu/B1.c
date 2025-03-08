// Chuẩn hóa chuỗi (xóa các ký tự trống thừa: các ký tự trống đầu và cuối, giữa 2 từ chỉ có 1 ký tự trống.

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

    return 0;
}
