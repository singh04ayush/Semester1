#include<stdio.h>
int main(){
    int x,y;
    printf("Enter the rows/column:");
    scanf("%d%d",&x,&y);
    int a[x][y];
    for(int j=0;j<x;j++){
        for(int k=0;k<y;k++){
            printf("enter elememt[%d][%d]",x,y);
            scanf("%d",&a[j][k]);
        }
    }
    
}