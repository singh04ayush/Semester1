
#include<stdio.h>
void main(){
    //Q7
    int Data[10]={3,6,9,12,15,18,21,24,27,30};
    for(int i=0;i<10;i++){
        Data[i]%=2;
    }
    printf("%d %d %d %d\n",Data[2],Data[5],Data[8],Data[9]);

//Q4
    for(int i=3;i<15;i+=3){
        printf("%d",i);
        ++i;
    }
}

