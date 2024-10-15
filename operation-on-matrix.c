#include<stdio.h>
void main(){
    int r1,c1,r2,c2,x;

    printf("Rows/Columns of First Matrix:");
    scanf(" %d%d",&r1,&c1);
    int M1[r1][c1];
    printf("Enter the elements->");
    for(int i=0;i<r1;i++){
        for(int k=0;k<c1;k++){
            scanf(" %d",&M1[i][k]);
        }
    }

    printf("Rows/Columns of Second Matrix:");
    scanf(" %d%d",&r2,&c2);
    int M2[r2][c2];
    printf("Enter the elements->");
    for(int i=0;i<r2;i++){
        for(int k=0;k<c2;k++){
            scanf(" %d",&M2[i][k]);
        }
    }

    int AR[r1][c1];
    int SR[r1][c1];
    int MR[r1][c2];

    printf("Enter 1 for add, 2 for sub and 3 for multiply-> ");
    scanf("%d",&x);

    switch (x){
        case 1:
        if(r1!=r2 && c1!=c2) printf("Addition not possible");
        else{
            for(int i=0;i<r1;i++){
                for(int k=0;k<c1;k++){
                AR[i][k]=M1[i][k]+M2[i][k];
                }
            }
            printf("After Addition-\n");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("%d ",AR[i][j]);
                }printf("\n");
            }
        }
        break;

        case 2:
        if(r1!=r2 && c1!=c2) printf("Subtraction not possible");
        else{
            for(int i=0;i<r1;i++){
                for(int k=0;k<c1;k++){
                SR[i][k]=M1[i][k]-M2[i][k];
                }
            }
            printf("After Subtraction-\n");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("%d ",SR[i][j]);
                    }
                    printf("\n");
                }
        }
        break;

        case 3:
        if(c1 != r2)printf("Multiplication not possible");
        else{
            for(int i = 0; i < r1; i++) {
                for(int j = 0; j < c2; j++) {
                    MR[i][j] = 0;
                    for(int k = 0; k < c1; k++) {
                        MR[i][j] += M1[i][k] * M2[k][j];
                        }
                }                                       // to be improved 
            }
            printf("After Multiplication-\n");
            for(int i=0;i<r1;i++){
                for(int j=0;j<c1;j++){
                    printf("%d ",MR[i][j]);
                    }
                    printf("\n");
                }
        }
        break;
    default:
    printf("Invalid Input!");
    break;
    }
    
}