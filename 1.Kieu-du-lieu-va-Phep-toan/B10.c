﻿// Nhập vào hai số nguyên a, b. Tìm số lớn nhất trong hai số.

#include <stdio.h>
#include <conio.h>

int main()
{
	int a, b;

	printf("Nhap hai so nguyen: ");
	scanf("%d%d", &a, &b);

	int max = (a > b) ? a : b;

	printf("\nSo lon nhat la: %d", max);
	return 0;
}