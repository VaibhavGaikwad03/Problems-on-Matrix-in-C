/*
Write a program which accepts matrix from user and display addition of elements from each column.

Input : 

3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output : 18  18  15  25

*/

/*
Write a program which  accept matrix and one number from user and return frequency of that number.

Input : 9

3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output : 3

*/

#include<stdio.h>

void AddColumn(int iRow, int iCol, int Matrix[][iCol])
{
    int i = 0, j = 0, iSum  = 0;

    for(i = 0; i < iRow; i++)
    {   
        for(j = 0; j < iCol; j++)
        {
            iSum = iSum + Matrix[j][i];
        }
        printf("Addition of column %d is : %d\n",i+1, iSum);
        iSum = 0;
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

    AddColumn(iRow, iCol, Arr);

    return 0;
}