/*
Write a program which accepts matrix from user and reverse the contents of each column.

Input : 

3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output : 

3   9   7   5
8   4   1   9
4   3   2   2
3   2   5   9

*/

#include<stdio.h>

void ReverseColumn(int iRow, int iCol, int Matrix[][iCol])
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
            Matrix[i][j] = TempMatrix[iRow-i-1][j];
        }
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            printf("%d\t", Matrix[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;

    printf("Enter the number of rows : \n");
    scanf("%d", &iRow);

    printf("Enter the number of columns : \n");
    scanf("%d", &iCol);

    int Arr[iRow][iCol];

    printf("Enter the elements in Matrix : \n");
    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }
    
    ReverseColumn(iRow, iCol, Arr);

    return 0;
}