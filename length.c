#include<stdio.h>
int main()
{
    float x, y, z, w;
    char ch;

    printf("Enter m to convert to meters and c to convert to centimeter ");
    scanf("%c",&ch);
    if(ch=='m'){
    printf("Enter the length in centimeter ");
    scanf("%f",&x);
    y=x/100;
    printf("Length in meter is %f ",y);
    }
    else if(ch=='c'){
        printf("Enter the length in meter ");
    scanf("%f",&z);
    w=z*100;
    printf("Length in meter is %f ",w);
    }
    else printf("Not a valid input!");
}