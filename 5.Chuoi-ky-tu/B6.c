﻿// Xóa tất cả khoảng trắng trong chuỗi.

#include <stdio.h>
#include <conio.h>
#include <string.h>

char *delete_space(char *str, char *result)
{
    int pos = 0;

    const int len = strlen(str); /*Tìm độ dài chuỗi ban đầu*/

    for (int i = 0; i < len; i++)
    {
        char c = str[i];

        /*Nếu ký tự lấy ra là ký tự trắng thì bỏ qua*/
        if (c == '\r' || c == '\n' || c == ' ')
        {
            continue;
        }

        /*Thêm ký tự lấy ra vào kết quả*/
        result[pos++] = c;
    }
    return result;
}

void main()
{
    char str[50];

    printf("Nhap vao chuoi ky tu: ");
    gets(str);

    char result[100];

    printf("%s\n", (delete_space(str, result)));

    getch();
}