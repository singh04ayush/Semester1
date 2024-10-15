#include<stdio.h>
int main(){
    int arr[5] = {23, 24, 25, 26, 27};
    int s = 0, e = 5;
    while(s!=e){
        int temp = arr[s];
        arr[s]=arr[e];
        arr[e]=temp;
    }
    for(int i=0;i<5;i++){
        printf("%d ", arr[i]);
    }
}