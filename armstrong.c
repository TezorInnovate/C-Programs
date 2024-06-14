#include<stdio.h>
#include<math.h>
int order(int x)
{
    int n = 0;
    while(x)
    {
        n++;
        x = x/10;
    }
    return n;
}
int armstrong(int x)
{
    int n = order(x);
    int temp = x, sum = 0;
    while(temp)
    {
        int r = temp % 10;
        sum += pow(r, n);
        temp = temp / 10;
    }
    if (sum == x)
        return 1;
    else 
        return 0;
}
int main()
{
    int x;
        printf("Enter a number: ");
        scanf("%d", &x);
    if(armstrong(x) == 1)
        printf("The number %d in anarmstrong number.\n", x);
    else
        printf("The number %d is not an armstrong number.\n", x);
    return 0;
}