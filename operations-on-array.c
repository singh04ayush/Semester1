#include<stdio.h>
int main(){
    int x,y,in,k;
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

    // for(int i=0;i<x;i++){
    //     for(int j=i+1;j<x;j++){
    //         if(a[i]==a[j]){
    //             for(int k=j;k<x;k++){
    //                 a[k-1]=a[k];
    //             }x--;
    //             j--;
    //         }
    //     }
    // }
    // int pos,val;
    // printf("enetr pos&value ");
    // scanf("%d%d",&pos,&val);
    // for(int i=x;i>=pos;i--){
    //     a[i+1]=a[i];
    // }
    // a[pos]=val;

    printf("\nElement to be inserted:At Position: ");
    scanf("%d%d",&in,&k);
   
    for(int i=x;i>=k-1;i--){
        a[i+1]=a[i];
    }
    a[k-1]=in;

    printf("Array After -> ");
    for(int i=0;i<x;i++){
        printf(" %d",a[i]);
    }

}


// #include<stdio.h>
// int main(){
//     int x,del;
//     printf("Size of Array: ");
//     scanf("%d",&x);
//     int a[x];
//     printf("Enter the Elements->");
//     for(int i=0;i<x;i++){
//         scanf("%d ",&a[i]);
//     }
//     printf("Array is-> ");
//     for(int i=0;i<x;i++){
//         printf("%d ",a[i]);
        
//     }

//     // printf("\nPosition of element to be deleted:");
//     // scanf(" %d",&del);
    
//     // for(int i=del+1;i<x;i++){
//     //     a[i-1]=a[i];
//     // }
//     // x--;
//     // printf("Array after deletion->");
//     // for(int i=0;i<x;i++){
//     //     printf(" %d",a[i]);
//     // }
// }

// #include<stdio.h>
// void main(){
//     int n,a[]={2,4,5,67,32,6};
//     n=sizeof(a)/sizeof(a[0]);
//     printf("Element of Array->");
//     for(int i=0;i<n;i++){
//         printf(" %d",a[i]);
//     }
// }