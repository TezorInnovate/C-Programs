#include<stdio.h>
int main()
{
    int n;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    int sum = 0;
    int sign = 1;
    int term = 13;
    for(int i = 1; i <= n; i++){
        sum += -sign * term;
        sign = -sign;
        term += 20;
    }
    printf("Sum of the series for %d terms is: %d\n", n, sum);
    return 0;
}