#include<stdio.h>
int main(){
    int n,mindex,temp,a[n];
    printf("enter size of array ");
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        printf("enter the %d element ",i);
        scanf("%d",&a[i]);
    }

    for(int i=0;i<n-1;i++){
        mindex=i;
        for(int j=0;j<n;j++){
            if(a[j]<a[mindex]);{
                mindex=j;
            }
        }
        if(mindex!=i){
            temp=a[i];
            a[i]=a[mindex];
            a[mindex]=temp;
        }
    }
    printf("sorted array is \n");
    for(int i=0;i<n;i++){
        printf("%d\t",a[i]);
    }
    return 0;
    
}