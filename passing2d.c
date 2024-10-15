#include<stdio.h>

void add_array (int a[2][2]);

int main(){
    
    int arr[2][2];
    
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("arr[%d][%d]: ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }

    add_array(arr);

    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
    printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}

void add_array(int a[2][2]){
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            a[i][j]=a[i][j]+2;
        }
    }
}