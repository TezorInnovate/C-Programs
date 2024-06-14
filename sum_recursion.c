#include<stdio.h>
int sum(int n);
int main()
{
    int num, result;
    printf("Enter number of terms: ");
    scanf("%d", &num);
    result = sum(num);
    printf("The sum of first %d digits is: %d", num, result);
    return 0;
}
int sum(int n)
{
    if(n != 0)
    return n + sum(n-1);
    else
        return n;
}