/*Viết chương trình tính tiền điện sử dụng trong tháng:
Từ 1 - 100KW: $5
Từ 101 - 150KW: $7
Từ 151 - 200KW: $10
Từ 201 - 300KW: $15
Từ 300KW trở lên: $20 */

#include <stdio.h>
#include <conio.h>

void main()
{
	int soDien, tien = 0;

	printf("\n\tNhap vao so dien ban da su dung: ");
	scanf_s("%d", &soDien);

	if (soDien <= 100)
		tien = soDien * 5;
	else if (soDien <= 150)
		tien = 100 * 5 + (soDien - 100) * 7;
	else if (soDien <= 200)
		tien = 100 * 5 + 50 * 7 + (soDien - 150) * 10;
	else if (soDien <= 300)
		tien = 100 * 5 + 50 * 7 + 50 * 10 + (soDien - 200) * 15;
	else tien = 100 * 5 + 50 * 7 + 50 * 10 + 100 * 15 + (soDien - 300) * 20;
	
	printf("\n\tSo tien phai tra la %d", tien);
	_getch();
}