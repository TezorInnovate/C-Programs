#include<stdio.h>
#include<math.h>
#include<stdlib.h>

void findRoots(int a, int b, int c)
{
    if(a == 0)
    {
        printf("Invalid");
        return;
    }
    int d = b * b - 4*a*c;
    double sqrt_val = sqrt(abs(d));

    if(d > 0)
    {
        printf("The roots are real and different.\n");
        printf(" %f, \n %f", (double)(-b + sqrt_val)/ (2*a), (double)(-b - sqrt_val)/ (2*a));
    }
    else if(d == 0)
    {
        printf("The roots are real and same\n");
        printf(" %f\n", -(double)b / (2*a));
    }
    else
    {
        printf("The roots are complex.\n");
        printf(" %f + i%f, \n %f - i%f\n", -(double)b/(2*a), sqrt_val/(2*a), -(double)b/ (2*a), sqrt_val/(2*a));
    }
}
int main()
{
 int a, b, c;
    printf("Enter value for a: ");
    scanf("%d", &a);
    printf("Enter value for b: ");
    scanf("%d", &b);
    printf("Enter valur for c: ");
    scanf("%d", &c);

    findRoots(a, b, c);
    return 0;
}