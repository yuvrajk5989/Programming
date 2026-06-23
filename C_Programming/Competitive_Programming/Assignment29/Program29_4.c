#include<stdio.h>
#include<stdbool.h>

bool CheckCapital(char ch)
{
    if ((ch >= 'a') && (ch <= 'z'))
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
        printf("It is in small case...");
    }
    else
    {
        printf("It is not in small case");
    }

    return 0;
}