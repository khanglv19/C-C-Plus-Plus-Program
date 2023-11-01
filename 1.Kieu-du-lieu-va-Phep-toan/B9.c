// Viết chương trình nhập vào chiều dài cạnh một hình vuông. Tính và xuất kết quả chu vi, diện tích, đường chéo của hình vuông trên.

#include <stdio.h>
#include <conio.h>
#include <math.h>

void main()
{
	float edge;

	printf("Nhap vao canh cua hinh vuong: ");
	scanf("%f", &edge);

	float perimeter, area, diagonal;

	perimeter = 4 * edge;
	area = edge * edge;

	diagonal = sqrt(pow(edge, 2) + pow(edge, 2));

	printf("\nChu vi = %.2f\t\tDien tich = %.2f\t\tDuong cheo = %.2f", perimeter, area, diagonal);
	getch();
}