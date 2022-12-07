/*Nhập tên sản phẩm, số lượng và đơn giá. Tính tiền và thuế giá trị gia tăng phải trả, biết rằng:
	- Tiền = số lượng * đơn giá
	- Thuế gia trị gia tăng = 10% * tiền.*/

#include <stdio.h>
#include <conio.h>

void main(){
	char tenSP;
	int sl;
	float dg;
	double thanhTien, thueGTGT;

	// printf("Nhap ten san pham: ");
	// scanf("%c", &tenSP);
	// printf("%c", tenSP);

	printf("\nNhap so luong: ");
	scanf("%d", &sl);
	printf("Nhap don gia: ");
	scanf("%f", &dg);

	thanhTien = (double)sl * dg;
	printf("\nThanh tien: %.f", thanhTien);

	thueGTGT = (double)0.1 * thanhTien;
	printf("\nThue GTGT: %.f", thueGTGT);

	getch();
}