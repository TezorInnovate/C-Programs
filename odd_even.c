#include<stdio.h>
int main() {
    int a;
    printf("Enter a random number: ");
    scanf("%d", &a);
    if(a%2 == 0) {
        printf("It is an even number.");
    }
    else {
        printf("It is an odd number.");
    }
    return 0;
}
