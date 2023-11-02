/*Nhập vào chức vụ của một nhân viên. Tính tiền phụ cấp của nhân viên đó,
biết rằng có các chức vụ "Giám đốc", "Trưởng phòng", "Tổ trưởng" và "Nhân viên" với phụ cấp tương ứng là 1000, 600, 400 và 0.*/

#include <stdio.h>
#include <conio.h>
#include <string.h>

void main()
{
	char cv[40];

	printf("Vui long nhap chuc vu: ");
	_flushall();
	gets(cv);

	if (strcmp(cv, "Giam doc") == 0)
		printf("Phu cap: 1000");
	else if (strcmp(cv, "Truong phong") == 0)
		printf("Phu cap: 600");
	else if (strcmp(cv, "To truong") == 0)
		printf("Phu cap: 400");
	else
		printf("Phu cap: 0");
	getch();
}