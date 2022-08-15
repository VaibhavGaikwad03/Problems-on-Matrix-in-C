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

int Frequency(int iRow, int iCol, int Freq, int Matrix[iRow][iCol])
{
    int i = 0, j = 0, iCount  = 0;

    for(i = 0; i < iRow; i++)
    {
        for(j = 0; j < iCol; j++)
        {
            if(Freq == Matrix[i][j])
            {
                iCount++;
            }
        }
    }
    return iCount;
}

int main()
{
    int iRow = 0, iCol = 0;
    int i = 0, j = 0, Freq = 0, iRet = 0;

    printf("Enter the number of rows : ");
    scanf("%d", &iRow);

    printf("Enter the number of columns : ");
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

    printf("Enter the nummber to count the frequency of that number : \n");
    scanf("%d", &Freq);

    iRet = Frequency(iRow, iCol, Freq, Arr);

    printf("Frequency of %d is : %d",Freq, iRet);

    return 0;
}