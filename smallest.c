#include<stdio.h>

int main()
{
    int a, b;
    printf("Enter the first number: ");
    scanf("%d", &a);
    printf("Enter the second number: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("The smallest number is %d\n", b);
    }
    else
    {
        printf("The smallest number is %d\n", a);
    }

    return 0;
}