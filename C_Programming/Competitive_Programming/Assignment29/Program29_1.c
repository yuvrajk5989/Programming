#include<stdio.h>
#include<stdbool.h>

bool CheckAlphabet(char ch)
{
    if (((ch >= 'A') && (ch <= 'Z')) || ((ch >= 'a') && (ch <= 'z')))
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

    bRet = CheckAlphabet(ch);

    if(bRet == true)
    {
        printf("It is Alphabet...");
    }
    else
    {
        printf("It is not a Alphabet");
    }

    return 0;
}