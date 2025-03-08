/* Nhập vào một số là năm. Cho biết năm đó nhuận hay không nhuận.
Biết rằng năm N là năm nhuận khi N chia hết cho 400 hoặc N chia hết cho 4 nhưng không chia hết cho 100*/

#include <stdio.h>
#include <conio.h>

int main()
{
	int year;

	printf("Nhap nam: ");
	scanf("%d", &year);

	if ((year % 400 == 0) || (year % 4 == 0) && (year / 100 != 0))
		printf("\nNam nhuan");
	else
		printf("\nNam khong nhuan");
	return 0;
}