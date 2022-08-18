/*
Write a program which accepts matrix from user and check whether the matix is sparse matrix or not.

Sparse matrix is a matrix with the majority of its elements equal to zero.

Input : 

1   0   3   0
0   6   0   0
0   0   1   0
9   0   0   9

Output : TRUE

*/

#include<stdio.h>

#define TRUE 1
#define FALSE 0

typedef int BOOL;

BOOL CheckSparse(int iRow, int iCol, int Matrix[][iCol])
{
    int i = 0, j = 0, iCnt = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Matrix[i][j] == 0)
            {
                iCnt++;
            }
        }
    }

    if((iCnt > (iRow*iCol)/2))
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
    
    bRet = CheckSparse(iRow, iCol, Arr);

    if(bRet == TRUE)
    {
        printf("Matrix is a Sparse Matrix\n");
    }
    else
    {
        printf("Matrix is not a Sparse Matrix\n");
    }

    return 0;
}