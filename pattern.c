//To perform various pattern in c


// 1. Square
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the no. of lines ");
//     scanf("%d",&n);
//     for(int i=1;i<=n;i++){
//         for(int j=1;j<=n;j++){
//             printf("* ");
//         }
//         printf("\n");
//     }

// } 




//  2. Rectangle
// #include<stdio.h>
// void main(){
//     int r,c;
//     printf("Enter the no. of Rows and Columns\n");
//     scanf("%d%d",&r,&c);
//     for(int i=1;i<=r;i++){
//         for(int j=1;j<=c;j++){
//             printf("* ");
//        }
//        printf("\n");
    
//     }
// }




// 3. Right Half pyramid
#include<stdio.h>
void main(){
    int n;
    printf("Enter the no. of lines ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            printf("*");
            }
            printf("\n");
    }
}




// 4. inverted right half pyramid
// #include<stdio.h>
// void main(){
//     int n;
//     printf("Enter the no. of lines ");
//     scanf("%d",&n);
//     for(int i=n;i>=1;i--){
//         for(int j=i;j>=1;j--){
//             printf("* ");
//         }
//         printf("\n");
//     }

// }

// #include <stdio.h> 
// void main() 
// { 
// int a[2][3]={},i,j; 

// for (i = 0; i < 2; i++){ 
// for (j = 0; j < 3; j++) {
// printf("%d", a[i][j]); 
// }
// printf("\n");
// }
// }


// #include <stdio.h>
// #define MAX(x,y) ((x) > (y) ? (x) : (y))
// int main(void) {
//  printf("Max between 20 and 10 is %d\n", MAX(10, 20)); 
//  return 0;
// }














