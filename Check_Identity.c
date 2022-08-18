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

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckIndentity(int iRow, int iCol, int Matrix[][iCol])
{
    int i = 0, j = 0;
    BOOL bFlag1 = FALSE;
    BOOL bFlag2 = FALSE;
    
    if(iRow != iCol)
    {
        return FALSE;
    }

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if((i == j) && (Matrix[i][j] == 1))
            {
                bFlag1 = TRUE;
            }
            if((i != j) && (Matrix[i][j] == 0))
            {
                bFlag2 = TRUE;
            }
        }
    }

    if((bFlag1 == TRUE) && (bFlag2 == TRUE))
    {
        return TRUE;
    }
    else
    {
        return FALSE;
    }
}

int main()
{
    int iRow = 0, iCol = 0;
    int i = 0, j = 0;
    BOOL bRet = FALSE;

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
    
    bRet = CheckIndentity(iRow, iCol, Arr);

    if(bRet == TRUE)
    {
        printf("Matrix is Identity Matrix\n");
    }
    else
    {
        printf("Matrix is not Identity Matrix\n");
    }

    return 0;
}