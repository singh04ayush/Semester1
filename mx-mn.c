#include<stdio.h>
#include<time.h>
#include<direct.h>
void main(){
clock_t start, end;
start = clock();

    int x,y,min,max;
    printf(" Number of rows/cloumns: ");
    scanf("%d%d",&x,&y);
    int a[x][y];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("Enter element [%d][%d]:",i,j);
            scanf("%d",&a[i][j]);
        }
    }min=max=a[0][0];
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(a[i][j]<min) min=a[i][j];
            if(a[i][j]>max) max=a[i][j];
        }
    }
    printf("Minimum and Maximum elements are:%d %d",min,max);
    end=clock();
    printf("\n%f",end-start/CLOCKS_PER_SEC);
}