/*Một môn học lý thuyết thường có 3 cột điểm hệ số 10: điểm tiểu luận, điểm giữa kỳ, điểm cuối kỳ có tỷ lệ lần lượt là 20%, 30% và 50%.
Hãy cho biết điểm chữ của môn học khi người dùng nhập vào điểm tiểu luận, điểm giữa kỳ và điểm cuối kỳ. Giả sử rằng cách quy đổi điểm hệ số
10 sang điểm chữ như sau:

		Điểm hệ 10				Điểm chữ
	Điểm hệ 10 >= 8.5				A
	7.0 <= điểm hệ 10 < 8.5			B
	5.5 <= điểm hệ 10 < 7.0			C
	4.0 <= điểm hệ 10 < 5.5			D
	điểm hệ 10 < 4.0				F */

#include <stdio.h>
#include <conio.h>

int main()
{
	float dtl, dgk, dck, dhp;
	char dc;

	printf("Nhap diem tieu luan: ");
	scanf("%f", &dtl);
	printf("Nhap diem giua ky: ");
	scanf("%f", &dgk);
	printf("Nhap diem cuoi ky: ");
	scanf("%f", &dck);

	dhp = (0.2 * dtl) + (0.3 * dgk) + (0.5 * dck);

	printf("\nDiem hoc phan: %.2f\n", dhp);

	if (dhp < 4)
		printf("Diem chu: F");
	else if (dhp >= 4 && dhp < 5.5)
		printf("Diem chu: D");
	else if (dhp >= 5.5 && dhp < 7)
		printf("Diem chu: C");
	else if (dhp >= 7 && dhp < 8.5)
		printf("Diem chu: B");
	else if (dhp >= 8.5)
		printf("Diem chu: A");

	return 0;
}