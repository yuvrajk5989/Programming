// Accept number and display sum of all non factors

#include<stdio.h>

int NonFactSum(int iNo)
{
    int iCnt = 0;
    int Sum = 0;

    for (iCnt = 1; iCnt <= iNo; iCnt++)
    {
        if((iNo % iCnt) != 0)
        {
            Sum = Sum + iCnt;
        }
    }
    return Sum;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf ("Enter the number : ");
    scanf("%d", &iValue);

    iRet = NonFactSum(iValue);

    printf("%d", iRet);

    return 0;
}