// Write a program which accept the number and print that much number of even numbers on the screen

#include<stdio.h>

void PrintEven(int iNo)
{
    int iCnt = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d ", 2 * iCnt);
    }
}

int main()
{
    int iValue = 0;

    printf("Enter the number : ");
    scanf("%d", & iValue);

    PrintEven(iValue);

    return 0;
}