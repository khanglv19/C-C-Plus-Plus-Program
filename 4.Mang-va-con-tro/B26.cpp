/* Sắp xếp mảng sao cho các phần tử chẵn tăng, các phần tử còn lại cố định. Sắp xếp thứ tự tăng theo hai tiêu chuẩn:
	Số lần xuất hiện và giá trị xuất hiện.*/

#include <stdio.h>

void sortArray(int a[], int n)
{
	int even[100], evenCount = 0;

	// Tách các số chẵn vào mảng even
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			even[evenCount++] = a[i];
		}
	}

	// Sắp xếp các số chẵn tăng dần
	for (int i = 0; i < evenCount - 1; i++)
	{
		for (int j = i + 1; j < evenCount; j++)
		{
			if (even[i] > even[j])
			{
				int temp = even[i];
				even[i] = even[j];
				even[j] = temp;
			}
		}
	}

	// Đưa số chẵn đã sắp xếp vào đầu mảng
	int index = 0;
	for (int i = 0; i < evenCount; i++)
	{
		a[index++] = even[i];
	}

	// Giữ nguyên các số còn lại
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 != 0)
		{
			a[index++] = a[i];
		}
	}
}

int main()
{
	int a[100];
	int n;

	printf("Nhap so phan tu cua mang a: ");
	scanf("%d", &n);

	printf("Nhap cac phan tu cua mang a:\n");
	for (int i = 0; i < n; i++)
	{
		scanf("%d", &a[i]);
	}

	sortArray(a, n);

	printf("Mang sau khi sap xep: \n");
	for (int i = 0; i < n; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}