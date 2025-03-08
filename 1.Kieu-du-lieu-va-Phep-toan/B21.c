/* Nhập vào 1 ký tự, kiểm tra ký tự đó là: ký tự in hoa, ký tự thường hay ký tự khác. */

/* Chúng ta có thể sử dụng hàm scanf để nhập vào 1 ký tự và lưu vào một biến kiểu char. Sau đó, chúng ta có thể sử dụng hàm isupper và islower trong thư viện ctype.h để kiểm tra xem ký tự đó có phải là ký tự in hoa hay ký tự thường không. Nếu ký tự đó không phải là ký tự in hoa hay ký tự thường, chúng ta có thể kết luận rằng nó là ký tự khác. Chúng ta có thể in ra kết quả bằng hàm printf. */

#include <stdio.h>
#include <conio.h>
#include <ctype.h>

int main()
{
    char c;

    printf("Nhap vao 1 ky tu: ");
    scanf("%c", &c);

    if (isupper(c))
    {
        printf("Ky tu %c la ky tu in hoa\n", c);
    }
    else if (islower(c))
    {
        printf("Ky tu %c la ky tu thuong\n", c);
    }
    else
    {
        printf("Ky tu %c la ky tu khac\n", c);
    }
    return 0;
}