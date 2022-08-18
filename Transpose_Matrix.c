/*
Write a program which  accept matrix from user and display transpose of the matrix.

Input : 

3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output : 

3   4   8   3
2   3   4   9
5   2   1   7
9   2   5   5

*/

#include<stdio.h>

void Transpose(int iRow, int iCol, int Matrix[][iCol])
{
    int i = 0, j = 0;
    int TempMatrix[iRow][iCol];

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            TempMatrix[i][j] = Matrix[i][j];
        }
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            Matrix[j][i] = TempMatrix[i][j];
        }
    }

    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0;
    int iCol = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iRow);

    printf("Enter the number of columns : \n");
    scanf("%d",&iCol);

    int Arr[iRow][iCol];

    printf("Enter the data into Matrix : \n");
    for(int i = 0; i < iRow; i++)
    {
        for(int j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    Transpose(iRow, iCol, Arr);


    return 0;
}