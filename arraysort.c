#include<stdio.h>
int main(){
    // int a[5]={2,6,3,4,1},max;
    // for (int i=0;i<4;i++){
    //     max=i;
    //     for (int j=i+1;j<5;j++){
    //         if(a[j]<a[max]) max=j;
    //     }
    //     if(max!=i){
    //         int tem=a[i];
    //         a[i]=a[max];
    //         a[max]=tem;
    //     }
    // }
    // for(int i=0;i<5;i++){
    //     printf("%d ",a[i]);
    // }
    int x,y,k;
    printf("Size of Array: ");
    scanf("%d",&x);
    int a[x];

    printf("No. of elements in array: ");
    scanf("%d",&y);
    printf("Enter the Elements->");
    for(int i=0;i<x;i++){
        if(i<y)scanf(" %d",&a[i]);
        else a[i]=0;
    }
    printf("Array is-> ");
    for(int i=0;i<y;i++){
        printf("%d ",a[i]);
        
    }
    printf("\nenetr position to delete: ");
    scanf("%d",&k);
    for(int i=k+1;k<x;i++){
        a[i-1]=a[i];
    }
    x--;
    for(int i=0;i<x;i++){
        printf("%d ",a[i]);
    }
    return 0;
}