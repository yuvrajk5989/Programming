// WAP to find reverse table of that number

#include<stdio.h>

int Table(int iNo)
{
    int iCnt = 0;

    for(iCnt = 10; iCnt >= 1; iCnt--)
    {
        printf("%d ", iNo * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    Table(iValue);

    return 0;
}