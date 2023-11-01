// Viết chương trình in trên màn hình các số từ 1->100, các số ngăn cách nhau bởi 1 đoạn khoảng trắng.

#include <stdio.h>
#include <conio.h>

void main()
{
	for (int i = 1; i <= 100; i++)
		printf("%4d", i);
	getch();
}