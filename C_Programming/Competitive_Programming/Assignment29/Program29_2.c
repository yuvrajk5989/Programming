#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'A') && (ch <= 'Z'))
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
        printf("It is capital...");
    }
    else
    {
        printf("It is not capital");
    }

    return 0;
}