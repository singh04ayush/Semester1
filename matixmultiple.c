#include<stdio.h>
#define MAX 10

void RM(int M[MAX][MAX], int r, int c) {
    int i, j;
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            printf("Enter element [%d][%d] : ", i, j);
            scanf("%d", &M[i][j]);
        }
    }
}

int MM(int M1[MAX][MAX], int M2[MAX][MAX], int R[MAX][MAX], int r1, int c1, int r2, int c2) {
    int i, j, k;
    if(c1 != r2) {
        printf("Matrices are not compatible for multiplication.");
        printf("\n");
        return 0;
    }
    for(i = 0; i < r1; i++) {
        for(j = 0; j < c2; j++) {
            R[i][j] = 0;
            for(k = 0; k < c1; k++) {
                R[i][j] += M1[i][k] * M2[k][j];
            }
        }
    }
    return 1;
}

int main() {
    int M1[MAX][MAX], M2[MAX][MAX], R[MAX][MAX];
    int x,r1, c1, r2, c2, min, max,sum=0;

    printf("First Matrix row/column: ");
    scanf("%d%d", &r1, &c1);
    RM(M1, r1, c1);

    printf("Enter rows and columns for second matrix: ");
    scanf("%d%d", &r2, &c2);
    RM(M2, r2, c2);

    x=MM(M1, M2, R, r1, c1, r2, c2);
    if(x==0) goto error;
    else{
        printf("Resultant Matrix:\n");
        for(int i = 0; i < r1; i++) {
            for(int k = 0; k < c2; k++) {
            printf("%d ", R[i][k]);
            }
        printf("\n");
         }
    }
    
    min = max = R[0][0];
    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            if(R[i][j] < min) {
                min = R[i][j];
            }
            if(R[i][j] > max) {
                max = R[i][j];
            }
        }
    }
    printf("The minimum element is %d and the maximum element is %d\n", min, max);

    for(int i = 0; i < r1; i++) {
        for(int j = 0; j < c2; j++) {
            if(i == 0 || j == 0 || i == r1-1 || j == c2-1) {
                sum += R[i][j];
            }
        }
    }
    printf("The sum of boundary elements is %d\n",sum);
    error:printf("\n");
    return 0;
}
