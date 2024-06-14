#include <stdio.h>
int main() {
    double length1, length2, length3;
    printf("Enter length 1 of the triangle: ");
    scanf("%lf", &length1);
    printf("Enter length 2 of the triangle: ");
    scanf("%lf", &length2);
    printf("Enter length 3 of the triangle: ");
    scanf("%lf", &length3);
    if ( length1 <= 0 || length2 <= 0 || length3 <= 0 ) {
        printf("Invalid input. the lengths must be positive values.\n");
    } 
    else {
        double temp;
        if(length1 > length3) {
            temp = length1;
            length1 = length3;
            length3 = temp;
        }
        if(length2 > length3) {
            temp = length2;
            length2 = length3;
            length3 = temp;
        }
        
        if(length3*length3 == length1*length1 + length2*length2) {
            printf("It is a right-angle triangle.\n");
        }
        else if(length3*length3 < length1*length1 + length2*length2) {
            printf("It is an acute-angle triangle.\n");
        }
        else {
            printf("It is an obtuse-angle triangle.\n");  }
    }
    return 0;
}
