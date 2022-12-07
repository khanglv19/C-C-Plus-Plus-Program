// Chuẩn hóa chuỗi (xóa các ký tự trống thừa: các ký tự trống đầu và cuối, giữa 2 từ chỉ có 1 ký tự trống.

#include <stdio.h>
#include <conio.h>
#include <string.h>

// Hàm biến đổi ký tự thường thành ký tự hoa
char toupper(char charx)
{
    if (charx >= 'a' && charx <= 'z')
        charx = charx - 32;
    return charx;
}

// Hàm chuẩn hóa xâu
void chuanHoa(char a[])
{
    int n = strlen(a); // Lấy độ dài xâu

    // Xóa khoảng trắng đầu xâu
    for (int i = 0; i < n; i++)
    {
        if (a[i] == ' ')
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[n - 1] = NULL;
            i--;
            n--;
        }
        else
            break;
    }

    // Xóa khoảng trắng cuối xâu
    for (int i = n - 1; i >= 0; i--)
    {
        if (a[i] == ' ')
        {
            a[i] = NULL;
            n--;
        }
        else
            break;
    }

    // Xóa khoảng trắng không hợp lệ(khoảng trắng bị thừa)
    for (int i = 1; i < n - 1; i++)
    {
        if (a[i] == a[i + 1])
        {
            for (int j = i; j < n - 1; j++)
            {
                a[j] = a[j + 1];
            }
            a[n - 1] = NULL;
            i--;
            n--;
        }
    }

    // In hoa ký tự đầu tiên
    a[0] = toupper(a[0]);
}

void main()
{
    char a[100];
    printf("Moi ban nhap chuoi:");
    gets(a);
    chuanHoa(a);
    printf("Chuoi duoc chuan hoa:");
    puts(a);
    getch();
}