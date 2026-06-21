// Accept Character for user and convert it to capital to small and vice versa

#include<stdio.h>

void DisplayConvert(int CValue)
{
    if(CValue >= 65 && CValue <= 90)
    {
        printf("%c", CValue + 32);
    } 
    else if (CValue >= 97 && CValue <= 122)
    {
        printf("%c", CValue - 32);
    }
    else
    {
        printf("Enter a valid character\n");
    }   
}

int main()
{
    char cValue = '\0';

    printf("Enter the character : ");
    scanf("%c", &cValue);

    DisplayConvert(cValue);

    return 0;
}