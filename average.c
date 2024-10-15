#include<stdio.h>
int main(){
    int n;
    printf("average of how many numbers: ");
    scanf("%d",&n);
    float a[n],sum=0.0;
    for(int i=0;i<n;i++){
        printf("Enter the number: ",i);
         scanf("%f",&a[i]);
         sum=sum+a[i];
    }
    
    float avg;
    avg=sum/n;
    printf("Average of the numbers are: %f",avg);




    
}