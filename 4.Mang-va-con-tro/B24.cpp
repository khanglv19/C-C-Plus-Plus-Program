/* Sắp xếp mảng a sao cho:
	- Các số chẵn ở đầu mảng và có thứ tự tăng.
	- Các số lẻ ở cuối mảng và có thử tự giảm. */

#include <stdio.h>

void sortArray(int a[], int n)
{
	int even[100], odd[100];
	int evenCount = 0, oddCount = 0;

	// Phân tách số chẵn và lẻ
	for (int i = 0; i < n; i++)
	{
		if (a[i] % 2 == 0)
		{
			even[evenCount++] = a[i];
		}
		else
		{
			odd[oddCount++] = a[i];
		}
	}

	// Sắp xếp số chẵn tăng dần
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

	// Sắp xếp số lẻ giảm dần
	for (int i = 0; i < oddCount - 1; i++)
	{
		for (int j = i + 1; j < oddCount; j++)
		{
			if (odd[i] < odd[j])
			{
				int temp = odd[i];
				odd[i] = odd[j];
				odd[j] = temp;
			}
		}
	}

	// Gộp mảng
	int index = 0;
	for (int i = 0; i < evenCount; i++)
	{
		a[index++] = even[i];
	}
	for (int i = 0; i < oddCount; i++)
	{
		a[index++] = odd[i];
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