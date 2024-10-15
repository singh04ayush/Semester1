#include<stdio.h>
int main(){
    int a=5, b=4;
    a++;
    --b;
    a--;
    printf("%d",b++);
    printf("%d",a--);
}