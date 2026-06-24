// Accept number and display factors in reverse order

#include<stdio.h>

int FactRev(int iNo)
{
    int iCnt = 0;

    for (iCnt = (iNo / 2); iCnt >= 1; iCnt--)
    {
        if((iNo % iCnt) == 0)
        {
            printf("%d ", iCnt);
        }
    }

}

int main()
{
    int iValue = 0;

    printf ("Enter the number : ");
    scanf("%d", &iValue);

    FactRev(iValue);

    return 0;
}