#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int main(){
    int t, n,sum=0;
    printf("Enter your test cases:");
    scanf("%d",&t);
    for(int i=0;i<t;i++){
        printf("Enter the upper limit:");
        scanf("%d",&n);
        for(int i=0;i<n;i++){
            if (i%3==0 || i%5==0){
                sum+=i;
            }
            
        }
        printf("Sum till %d is %d\n",n,sum);
        sum=0;
    }
    
    return 0;
}
