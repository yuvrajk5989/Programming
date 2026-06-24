// WAP to find factorial of the number 

#include<stdio.h>

int Factorial(int iNo)
{
    int iCnt = 0;
    int fact = 1;

    for(iCnt = iNo; iCnt >= 1; iCnt--)
    {
        fact = fact * iCnt;
    }
    return fact;
}

int main()
{
    int iValue = 0, iRet = 0;

    printf("Enter the number : ");
    scanf("%d", &iValue);

    iRet = Factorial(iValue);

    printf("%d", iRet);

    return 0;
}