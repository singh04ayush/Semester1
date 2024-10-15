#include<stdio.h>
int main(){
    int arr[6], sum=0;
    for(int i=0;i<6;i++){
        scanf("%d", &arr[i]);
    }
    for(int i=0;i<6;i++){
        sum+=arr[i];
    }
    printf("%d", sum);
    
    // int arr[]={1,4,5,6,9};
    // int i, sum=0;
    // for(i=0;i<5;i++){
    //     sum+=arr[i];
    // }
    // printf("%d", sum);
}