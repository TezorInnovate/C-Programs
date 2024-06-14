#include <stdio.h>
int main() {
    double side1, side2, side3;
    printf("Enter length of side 1 of the triangle: ");
    scanf("%lf", &side1);
    printf("Enter length of side 2 of the triangle: ");
    scanf("%lf", &side2);
    printf("Enter length of side 3 of the triangle: ");
    scanf("%lf", &side3);
    if (side1 == side2 && side2 == side3) {
        printf("It is an equilateral triangle.\n");
    } 
    else if (side1 == side2 || side1 == side3 || side2 == side3) {
        printf("It is an isosceles triangle.\n");
    } 
    else {
        printf("It is a scalene triangle.\n");
    }
    return 0;
}
