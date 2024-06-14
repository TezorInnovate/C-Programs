#include<stdio.h>

int main()
{
    int salary, DA, HRA, gross;
    printf("Enter salary: ");
    scanf("%d", &salary);

    DA = (0.4*salary);
    HRA = (0.2*salary);
    gross = salary + DA + HRA;

    printf("Gross salary: %d", gross);
    return 0;
}