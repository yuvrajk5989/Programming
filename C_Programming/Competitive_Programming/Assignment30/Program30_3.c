#include<stdio.h>

void Display(char ch)
{
    char ch1 = '\0';
    
    if (ch >= 'a' && ch <= 'z')
    {
        for(ch1 = ch; ch1 >= 'a'; ch1--)
        {
            printf("%c ", ch1);
        }
    }
    else if (ch >= 'A' && ch <= 'Z')
    {
        for(ch1 = ch; ch1 <= 'Z'; ch1++)
        {
            printf("%c ", ch1);
        }
    }
    else
    {
        printf("Invalid character...");
    }
}

int main()
{
    char ch = '\0';

    printf("Entre the character : ");
    scanf("%c", &ch);

    Display(ch);

    return 0;
}