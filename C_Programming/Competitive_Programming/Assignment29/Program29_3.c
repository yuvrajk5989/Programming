#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= '0') && (ch <= '9'))
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{   
    char ch = '\0';
    bool bRet = false;

    printf("Enter the character : ");
    scanf("%c", &ch);

    bRet = CheckCapital(ch);

    if(bRet == true)
    {
        printf("It is digit...");
    }
    else
    {
        printf("It is not digit");
    }

    return 0;
}