#include<stdio.h>
int main(){
    float c,f,k;
    printf("Enter temperature in celsius: ");
    scanf("%f",&c);
    f=(c*9/5)+32;
    k=c+273.150000;
    printf("Temperature in fahrenheit is:%f ",f);
    printf("\nTemperature in kelvin is:%f ",k);
    
}