#include<stdio.h>
#include<stdbool.h>

void DisplaySchedule(char ch)
{
    if (ch == 'a' || ch == 'A')
    {
        printf("Your exam is at 7 AM");
    }

    if (ch == 'b' || ch == 'B')
    {        
        printf("Your exam is at 8.30 AM");
    }

    if (ch == 'c' || ch == 'C')
    {
        printf("Your exam is at 9.20 AM");
    }

    if (ch == 'd' || ch == 'D')
    {
        printf("Your exam is at 10.30 AM");
    }
}

int main()
{   
    char ch = '\0';

    printf("Enter the character : ");
    scanf("%c", &ch);

    DisplaySchedule(ch);    

    return 0;
}