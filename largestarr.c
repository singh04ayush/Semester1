/*#include<stdio.h>
int main(){
    int n,big=0;
    printf ("enetr size of an array ");
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++){
        printf("enter the %d no ",i);
        scanf("%d",&a[i]);
    }
    for(int j=0;j<n;j++){
        for(int i=0;i<n;i++){
            if(a[i]<a[i+1]) big=a[i+1];
        }
    }
    printf("Gratest number is %d",big);
}
*/

/*#include<stdio.h>
int main(){
    int a[5]={1,5,34,6,43};
    int *p=&a[0];
    for(int i=0;i<5;i++){
        printf("%d\t",*(p+i));
    }
}*/

#include<stdio.h>
#include<conio.h>
int main(){
    int i,n,max,a[15],*p;
    printf("enter size of array ");
    scanf("%d",&n);
    
    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    p=a;
    max=a[0];

    for(int k=1;k<n;k++){
        if(*p<a[k]) max=a[k];
    }
    printf("greatest no is %d",max);
}