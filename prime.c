#include<stdio.h>
int main()
{
    int num;
    printf("Enter a number to test: ");
    scanf("%d",&num);
    if(num <= 1)
    {
        printf("%d is not in range for testing.\n", num);
        return 0;
    }
    int testPrime = 1;
    for(int i = 2; i * i <= num; i++)
    {
        if(num % i == 0)
        {
            testPrime = 0;
            break;
        }
    }
    if(testPrime)
    {
        printf("%d is a prime number.\n", num);
    }
    else
    {
        printf("%d is not a prime number.\n", num);
    }
    return 0;
}