/*
Write a program which  accept matrix from user and return addition of diagonal elements.

Input : 

3   2   5   9
4   3   2   2
8   4   1   5
3   9   7   5

Output : 12

*/

#include<stdio.h>

int AddDiagonal(int iSize, int Matrix[][iSize])
{
    int i = 0, j = 0, iSum  = 0;

    for(i = 0; i < iSize; i++)
    {
        for(j = 0; j < iSize; j++)
        {
            if(i == j)
            {
                iSum = iSum + Matrix[i][j];
            }
        }
    }
    return iSum;
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

    iRet = AddDiagonal(iValue, Arr);

    printf("Addition of matrix diagonal is : %d", iRet);

    return 0;
}