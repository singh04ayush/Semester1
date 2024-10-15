#include<stdio.h>
void main(){
    int r,c;

    printf("Rows/Columns of Matrix:");
    scanf(" %d%d",&r,&c);
    int M[r][c];
    int T[c][r];
    printf("Enter the elements->");
    for(int i=0;i<r;i++){
        for(int k=0;k<c;k++){
            scanf(" %d",&M[i][k]);
        }
    }

    printf("Matrix is-\n");
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            printf("%d ",M[i][j]);
        }printf("\n");
    }
    
    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            T[i][j]=M[j][i];
        }
    }
    
    printf("Transpose is-\n");

    for(int i=0;i<c;i++){
        for(int j=0;j<r;j++){
            printf("%d ",T[i][j]);
        }printf("\n");
    }
}