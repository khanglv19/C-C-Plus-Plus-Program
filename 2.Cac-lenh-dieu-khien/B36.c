/*Nhập một tháng (nhập bằng số), in ra màn hình tháng đó bằng tiếng Anh tương ứng 
(January, February, March, April, may, June, July, August, September, October, November, December).
Nếu nhập tháng không đúng thì in ra màn hình "Month is invalid". */

#include <stdio.h>
#include <conio.h>

void main()
{
	int month;

	printf("\nNhap thang (bang so): ");
	scanf_s("%d", &month);
	
	switch (month)
	{
	case 1: printf("January");
		break;
	case 2: printf("February");
		break;
	case 3: printf("March");
		break;
	case 4: printf("April");
		break;
	case 5: printf("May");
		break;
	case 6: printf("June");
		break;
	case 7: printf("July");
		break;
	case 8: printf("August");
		break;
	case 9: printf("September");
		break;
	case 10: printf("October");
		break;
	case 11: printf("November");
		break;
	case 12: printf("December");
		break;
	default: printf("\nMonth is invalid");
		break;
	}
	_getch();
}