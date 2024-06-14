#include<stdio.h>

int main()
{
    char input;

    printf("Enter a character: ");
    scanf("%c", &input);

    if((input >= 'a' && input <=  'z') || (input >= 'A' && input <= 'Z'))
    {
        printf("The character %c is an alphabet.\n", input);
    }
    else if(input >= '0' && input <= '9')
    {
        printf("The character %c is a number.\n", input);
    }
    else
    {
        printf("The character %c is neither an alphabet nor a number.\n", input);
    }
    
    return 0;
}