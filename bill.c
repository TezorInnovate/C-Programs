#include<stdio.h>

int main()
{
    int customer_id, units;
    float rate, total_amount;
    
    printf("Enter cumstomer ID: ");
    scanf("%d", &customer_id);
    printf("Enter units consumed: ");
    scanf("%d", &units);
    
    if(units<= 199)
        rate = 1.20;
    else if(units>=200 && units<=500)
        rate = 1.80;
    else
        rate = 2.00;
    
    total_amount = units*rate;
    
    if(total_amount>400)
        total_amount += total_amount*0.15;
    if(total_amount<100)
        total_amount = 100;
    
    printf("Customer ID: %d\n", customer_id);
    printf("Total Amount to Pay: Rs.%.2f\n", total_amount);
    
    return 0;
}