#include<stdio.h>
int main(){
    int x,y,z=0,nz=0,a=0;
    printf("Enter rows/cols of Matrix: ");
    scanf("%d%d",&x,&y);
    int M[x][y];
    printf("Enter the elements->");
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            scanf(" %d",&M[i][j]);
        }
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            printf("%d ",M[i][j]);
        }printf("\n");
    }
    for(int i=0;i<x;i++){
        for(int j=0;j<y;j++){
            if(M[i][j]==0) z+=1;
            else nz+=1;
        }
    }
    if(nz>z){
        printf("It is not a sparse Matrix.");
        return 1;
    }
    else{
        int SM[3][nz];
        for(int i=0;i<x;i++){
            for(int j=0;j<y;j++){
                if(M[i][j]!=0){
                    SM[0][a]=i;
                    SM[1][a]=j;
                    SM[2][a]=M[i][j];
                    a++;
                }
            }
        }
        printf("It is a Sparse Matrix is-\n");
        for(int i=0;i<3;i++){
            for(int j=0;j<nz;j++){
                 printf("%d ",SM[i][j]);
            }printf("\n");
        }
    }
    return 0;
}