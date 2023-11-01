/*Tính tiến khách ở  khách sạn trong tháng:
	- Nhập vào ngày đến ở khách sạn, nhập ngày rời khỏi khách sạn (giả sử ngày đến và ngày đi là số nguyên dương trong tháng (từ ngày 1 -> 31)).
	- Tính tổng số ngày khách đã ở trong tháng.
	- Tính tiền khách phải trả, biết rằng đơn giá tuần là 650 và đơn giá ngày là 100.*/

/* Tính số ngày khách đã ở trong tháng. Để làm điều này, chúng ta có thể lấy ngày rời khách sạn trừ đi ngày đến ở khách sạn và cộng thêm 1. Vì nếu khách đến vào ngày 1 và rời vào ngày 1 của tháng sau thì khách đã ở trong tháng đó là 1 ngày. Vậy số ngày khách đã ở trong tháng là:
	số ngày = ngày rời - ngày đến + 1

Sau đó, để tính tiền khách phải trả, chúng ta có thể tính số tuần và số ngày dư ra. Số tuần có thể được tính bằng cách lấy số ngày chia cho 7. Số tiền phải trả cho số tuần này là 650 * số tuần. Số tiền phải trả cho số ngày dư ra là 100 * số ngày dư ra. Vậy công thức tính tiền khách phải trả là:
	tiền = 650 * (số ngày / 7) + 100 * (số ngày % 7) */

#include <stdio.h>
#include <conio.h>

void main()
{
	int start, end;

	printf("Nhap vao ngay den: ");
	scanf("%d", &start);
	printf("Nhap vao ngay roi di: ");
	scanf("%d", &end);

	int days = end - start + 1;
	int weeks = days / 7;
	int remaining_days = days % 7;
	int total_price = weeks * 650 + remaining_days * 100;

	printf("So tien khach phai tra la: %d\n", total_price);
	getch();
}
