#include <stdio.h>
#define MAX(x,y) ((x) > (y) ? (x) : (y))
int main() {
    float a,b;
    printf("Enter First Number: ");
    scanf("%f",&a);
    printf("Enter First Number: ");
    scanf("%f",&b);
    printf("Greatest Number is: %f",MAX(a,b) );
    return 0;
}