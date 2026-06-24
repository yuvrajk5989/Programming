// Accept number and display difference between sum of factors and non factors

#include<stdio.h>

int FactDiff(int iNo)
{
    int iCnt = 0;
    int NonFactSum = 0;
    int FactSum = 0;
    int Diff = 0;

    for (iCnt = 1; iCnt < iNo; iCnt++)
    {
        if((iNo % iCnt) == 0)
        {
            FactSum = FactSum + iCnt;
        }
        else 
        {
            NonFactSum = NonFactSum + iCnt;
            
        }
    }
    Diff = FactSum - NonFactSum;
    
    return Diff;

}

int main()
{
    int iValue = 0;
    int iRet = 0;

    printf ("Enter the number : ");
    scanf("%d", &iValue);

    iRet = FactDiff(iValue);

    printf("%d", iRet);

    return 0;
}