/*Viết chương trình vẽ hình chữ nhật có kích thước d x r, trong đó d là chiều dài và r là chiều rộng được nhập từ bàn phím.
Ví dụ: Nhập d = 5, r = 3
*	*	*	*	*
*	*	*	*	*
*	*	*	*	*	*/

#include <stdio.h>
#include <conio.h>

void main()
{
    int cd, cr;

    printf("Nhap chieu dai: ");
    scanf("%d", &cd);
    printf("Nhap chieu rong: ");
    scanf("%d", &cr);

    for (int i = 1; i <= cr; i++)
    {
        for (int j = 1; j <= cd; j++)
            printf("* ");
        printf("\n");
    }
    getch();
}