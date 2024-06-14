#include<stdio.h>
int fib(int);
int main(){
    int n, i;
    printf("Enter number of terms: ");
    scanf("%d", &n);
    for(i = 0; i < n; i++){
        printf("%d, ", fib(i));
    }
    return 0;
}
int fib(int i)
{
    if(i == 0)
    return 0;
    else if(i == 1)
    return 1;
    else return (fib(i-1) + fib(i-2));
}
