#include<stdio.h>

int main()
{
    int d, fine;

    printf("Enter the number of days delay: ");
    scanf("%d", &d);

    if(d<=5)
        printf("Fine is=0.5/-\n");
    else if(d>=6 && d<=10)
        printf("Fine is = 1/-\n");
    else if(d>10 && d<=30)
        printf("Fine is = 5/-\n");
    else {
        printf("You have exceeded 30 days.\n");
        printf("Your membership has been cancelled.\n");  }
    return 0;
}