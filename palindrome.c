#include<stdio.h>
int main()
{
    int original_number;
    printf("Enter a number: ");
    scanf("%d", &original_number);
    int reversed = 0;
    int num = original_number;
    while(num != 0){
        int r = num % 10;
        reversed = reversed * 10 + r;
        num /= 10;
    }
    if(original_number == reversed)
    {
        printf("Given number %d is a palindrome.\n", original_number);
    }
    else
    {
        printf("The number %d is not a palindrome.\n", original_number);
    }
    return 0;
}