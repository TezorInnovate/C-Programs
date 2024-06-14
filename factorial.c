#include<stdio.h>

int main()
{
    int number;
    long long factorial = 1;
    printf("Enter an integer number: ");
    scanf("%d", &number);
    if(number<0)
    {
        printf("Factorial is undefined.\n");
    }
    else
    {
        for(int i = 1; i<= number; i++){
            factorial *= i;
        }
    printf("Factorial of %d = %lld\n", number, factorial);
    }
    return 0;
}