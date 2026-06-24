// if number less than 50 print small, if greater than 50 and lesss than 100 print medium 
// and if greater than 100 print large

#include<stdio.h>

void Number(int iNo)
{
    if (iNo < 50)
    {
        printf("Small");
    }
    else if (50 <= iNo < 100)
    {
        printf("Medium");
    }
    else
    {
        printf("Large");
    }
    
}

int main()
{   
    int iValue = 0;

    printf("Enter the value : ");
    scanf("%d", &iValue);

    Number(iValue);

    return 0;
}