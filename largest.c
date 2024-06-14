#include<stdio.h>

int main()
{
    int a, b;
    printf("\n");
    printf("Enter first value: ");
    scanf("%d", &a);
    printf("Enter second value: ");
    scanf("%d", &b);

    if(a>b)
    {
        printf("The largest value is %d", a);
        printf("\n");
    }
    else
    {
        printf("The largest value is %d", b);
        printf("\n");
    }

    return 0;
}