#include<stdio.h>
int factorial(int num)
{
    if(num == 0 || num == 1){
        return 1;
    }
    else {
        return num * factorial(num - 1);
    }
}
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int sum = 0;
    for(int i = 1; i <= n; i++) {
        sum += factorial(i);
    }
    printf("Sum of series is: %d\n", sum);
    return 0;
}