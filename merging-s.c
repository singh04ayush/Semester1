#include<stdio.h>
#include<time.h>
#include<direct.h>
void main(){
    clock_t start,end;
    start=clock();
    int x,y,z,a=0,mindex,temp;
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
    for(int i=0;i<z-1;i++){
        mindex=i;
        for(int j=i+1;j<z;j++){
            if(M[j]<M[mindex]){
                mindex=j;
            }
        }
        if(mindex!=i){
            temp=M[i];
            M[i]=M[mindex];
            M[mindex]=temp;
        }
    }
    printf("After Merging->");
    for(int i=0;i<z;i++){
        printf(" %d",M[i]);
    }
    end=clock();
    printf("\n%f",((double)end-start)/CLOCKS_PER_SEC);
}