// Viết chương trình nhập một ma trận nguyên tối đa 20 dòng, 20 cột và xuất ra ma trận này.
// Tìm phần tử lớn nhất của ma trận.
// Viết chương trình tính tổng dòng thứ i và cột thứ j của ma trận số nguyên m x n.

#include <stdio.h>

#define MAX_ROWS 20
#define MAX_COLS 20

void inputMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    printf("Nhap cac phan tu cua ma tran (%d x %d):\n", rows, cols);
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("matrix[%d][%d] = ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    printf("Ma tran da nhap:\n");
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int findMaxElement(int matrix[MAX_ROWS][MAX_COLS], int rows, int cols)
{
    int maxElement = matrix[0][0];
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (matrix[i][j] > maxElement)
            {
                maxElement = matrix[i][j];
            }
        }
    }
    return maxElement;
}

int sumRow(int matrix[MAX_ROWS][MAX_COLS], int row, int cols)
{
    int sum = 0;
    for (int j = 0; j < cols; j++)
    {
        sum += matrix[row][j];
    }
    return sum;
}

int sumCol(int matrix[MAX_ROWS][MAX_COLS], int col, int rows)
{
    int sum = 0;
    for (int i = 0; i < rows; i++)
    {
        sum += matrix[i][col];
    }
    return sum;
}

int main()
{
    int matrix[MAX_ROWS][MAX_COLS];
    int rows, cols, i, j;

    printf("Nhap so dong cua ma tran (toi da 20): ");
    scanf("%d", &rows);

    printf("Nhap so cot cua ma tran (toi da 20): ");
    scanf("%d", &cols);

    if (rows <= 0 || rows > MAX_ROWS || cols <= 0 || cols > MAX_COLS)
    {
        printf("Kich thuoc ma tran khong hop le!\n");
        return 1;
    }

    inputMatrix(matrix, rows, cols);
    printMatrix(matrix, rows, cols);

    int maxElement = findMaxElement(matrix, rows, cols);
    printf("Phan tu lon nhat trong ma tran la: %d\n", maxElement);

    printf("Nhập dòng cần tính tổng (0 đến %d): ", rows - 1);
    scanf("%d", &i);

    printf("Nhập cột cần tính tổng (0 đến %d): ", cols - 1);
    scanf("%d", &j);

    if (i >= 0 && i < rows)
    {
        printf("Tổng các phần tử dòng %d: %d\n", i, sumRow(matrix, i, cols));
    }
    else
    {
        printf("Dòng không hợp lệ!\n");
    }

    if (j >= 0 && j < cols)
    {
        printf("Tổng các phần tử cột %d: %d\n", j, sumCol(matrix, j, rows));
    }
    else
    {
        printf("Cột không hợp lệ!\n");
    }

    return 0;
}