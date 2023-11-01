/* Viết chương trình nhập vào đơn giá một mặt hàng và số lượng bán của mặt hàng. Tính tiền khách phải trả với thông tin như sau:
Thành tiền = đơn giá * số lượng. */

#include <stdio.h>
#include <conio.h>

void main()
{
	float donGia, thanhTien, giamGia, tongTienPhaiTra;
	int soLuong;

	printf("Nhap don gia: ");
	scanf("%f", &donGia);
	printf("Nhap so luong: ");
	scanf("%d", &soLuong);

	thanhTien = donGia * soLuong;

	if (thanhTien > 100)
		giamGia = 0.03 * thanhTien;

	tongTienPhaiTra = thanhTien - giamGia;
	printf("\nSo tien phai tra la: %.3f", tongTienPhaiTra);
	getch();
}