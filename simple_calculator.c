#include<stdio.h>

int main()
{
    int optn, a, b, c;
    printf("Addition       - 1\n");
    printf("Subtraction    - 2\n");
    printf("Multiplication - 3\n");
    printf("Division       - 4\n");
    printf("Enter option: ");
    scanf("%d", &optn);

    printf("Enter first number: ");
    scanf("%d", &a);
    printf("Enter second number: ");
    scanf("%d", &b);

    switch ((optn))
    {
    case 1:
        c = (a + b);
        printf("Sum is = %d", c);
        break;
    
    case 2:
        c = (a - b);
        printf("Difference is = %d", c);
        break;

    case 3:
        c = (a * b);
        printf("Product is = %d", c);
        break;

    case 4:
        c = (a / b);
        printf("Sum is = %d", c);
        break;
    
    default:
        printf("Incorrect option.");
        break;
    }
    return 0;
}