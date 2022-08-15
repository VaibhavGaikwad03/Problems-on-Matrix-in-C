/*
Write a program which  accept matrix from user and return largest number from both the diagonals.

Input : 

3   2   5   9
4   3   2   2
8   4   1   9
3   9   7   5

Output : 9

*/

#include<stdio.h>

int MaxDiagonal(int iSize, int Matrix[][iSize])
{
    int i = 0, j = 0;
    int iMax = 0;

    for(i = 0; i < iSize; i++)
    {
        for(j = 0; j < iSize; j++)
        {
            if((i == j) || (i + j == iSize-1))
            {
                if(iMax < Matrix[i][j])
                {
                    iMax = Matrix[i][j];
                }
            }
        }
    }
    return iMax;
}

int main()
{
    int iValue = 0;
    int i = 0, j = 0, iRet = 0;

    printf("Enter the number of rows & columns : ");
    scanf("%d", &iValue);

    int Arr[iValue][iValue];

    printf("Enter the elements in Matrix : \n");
    for(i = 0; i < iValue; i++)
    {
        for(j = 0; j < iValue; j++)
        {
            scanf("%d", &Arr[i][j]);
        }
    }

    iRet = MaxDiagonal(iValue, Arr);

    printf("Largest number from both diagonals is : %d", iRet);

    return 0;
}