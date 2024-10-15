#include<stdio.h>
void main(){
    int x,y,z,a=0;
    printf("Size of first and second array: ");
    scanf("%d%d",&x,&y);
    int A1[x],A2[y];
    printf("Elements of first array->");
    for(int i=0;i<x;i++){
        scanf(" %d",&A1[i]);
    }
    printf("Elements of second array->");
    for(int i=0;i<y;i++){
        scanf(" %d",&A2[i]);
    }
    z=x+y;
    int M[z];
    for(int i=0;i<x;i++){
        M[a]=A1[i];
        a++;
    }
    for(int i=0;i<y;i++){
        M[a]=A2[i];
        a++;
    }
    printf("Array after Merging->");
    for(int i=0;i<z;i++){
        printf(" %d",M[i]);
    }
}