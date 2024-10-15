#include<stdio.h>
int main(){
    int n;
    printf("ENTER THE VALUE: ");
    scanf("%d",&n);
    int pen=1;
    for(int i=1;i<=n;i++){
        pen=pen*2;
    }
    printf("value will be: %d",pen);
}