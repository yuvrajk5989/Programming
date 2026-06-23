#include<stdio.h>

void Display(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        ch = ch - 32;
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        ch = ch + 32;
    }
    printf("%c", ch);
}

int main()
{
    char ch = '\0';

    printf("Entre the character : ");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}