

//  Star & Number & Character Pattern Printing 


#include<stdio.h>
int main(){
    int a,b;
    printf("Enter no. of Rows: ");
    scanf("%d",&a);
    printf("Enter no. of Column: ");
    scanf("%d",&b);

    
     for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("* ");
        }printf("\n");
    }
     
     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=b;j++){
            printf("%d ",j);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=a;j>=1;j--){
            printf("%d ",j);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        int x=1;
        for(int j=1;j<=b;j++){
            int d=x+64;
            char ch= (char)d;
            printf("%c ",ch);
            x++;
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        
        for(int j=a;j>=1;j--){
            int d=j+64;
            char ch= (char)d;
            printf("%c ",ch);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",j);
        }printf("\n");
    }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=a;j>=i;j--){
            printf("%d ",j);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=a;j>=i;j--){
            printf("%d ",i);
        }printf("\n");
     }

     printf("\n");

     for(int i=1;i<=a;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            int d=x+64;
            char ch= (char)d;
            printf("%c ",ch);
            x++;
        }printf("\n");
    }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=a;j>=i;j--){
            int d=j+64;
            char ch=(char)d;
            printf("%c ",ch);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            int d=x+64;
            char ch=(char)d;
            printf("%c ",ch);
            x++;
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=a;j>=i;j--){
            int x=i+64;
            char ch=(char)x;
            printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("* ");
        }printf("\n");
     }
   
     printf("\n");

     for(int i=a;i>=1;i--){
      for(int j=1;j<=i;j++){
            printf("%d ",j);
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
      for(int j=1;j<=i;j++){
        int x=j+64;
        char ch=(char)x;
        printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            printf("%d ",j);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            int x=j+64;
            char ch=(char)x;
            printf("%c ",ch);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            printf("%d ",i);
        }printf("\n");
    }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=a;j>=i;j--){
            int x=i+64;
            char ch=(char)x;
            printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            printf("%d ",i);
        }printf("\n");
     }

     printf("\n");

     for(int i=a;i>=1;i--){
        for(int j=1;j<=i;j++){
            int x=i+64;
            char ch=(char)x;
            printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

     for(int i=1;i<=a;i++){
        int x=1;
        for(int j=1;j<=a;j++){
            printf("%d ",x);
            x=x+2;
         }printf("\n");
    }
      
      printf("\n");

     for(int i=1;i<=a;i++){
        int x=1;
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x=x+2;
         }printf("\n");
    }

        printf("\n");

       for (int i = 1; i <=a; i++){
        for(int j=1;j<=i;j++){
            if(i%2!=0){
                printf("%d ",j);
            }
            else{
                int x=j+64;
                char ch=(char)x;
                printf("%c ",ch);
            }
            
        }printf("\n");
       }

      printf("\n");

     for (int i = 1; i <= a; i++){
        for(int j=1;j<=a;j++){
            if(i==(a+1)/2 || j==(a+1)/2) printf("* ");
            else printf("  ");
        }printf("\n");
     }
     
      printf("\n");

     for (int i = 1; i <= a; i++){
        for(int j=1;j<=a;j++){
            if(i==1||i==a) printf("* ");
            else if (j==1||j==a) printf("* ");
            else printf("  ");
        }printf("\n");
     }
     
      printf("\n");

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a;j++){
            if(i==j || i+j==a+1) printf("* ");
            else printf("  ");
        }printf("\n");
    }

    printf("\n");

     int k=1;
     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",k);
            k=k+1;
        }printf("\n");
     }

    printf("\n");
     int x=1;
     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            printf("%d ",x);
            x=x+2;
        }printf("\n");
     }

    printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=i;j++){
            if(i==j || (i-j)%2==0) printf("1 ");
            else printf("0 ");
        }printf("\n");
      }

    printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=a;k++){
            printf("*");
        }
        printf("\n");
     }

     printf("\n");

    for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("  ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("* ");
        }printf("\n");
     }

    printf("\n");

      for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            printf("%d ",k);
        }printf("\n");
     }

    printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf(" ");
        }
        for(int k=1;k<=i;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
        }printf("\n");
     }

     printf("\n");

      for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("* ");
        }printf("\n");
     }

    printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            printf("%d ",k);
        }printf("\n");
     }

    printf("\n");

     for(int i=1;i<=a;i++){
        for(int j=1;j<=a-i;j++){
            printf("  ");
        }
        for(int k=1;k<=(2*i)-1;k++){
            char ch=(char)(k+64);
            printf("%c ",ch);
        }printf("\n");
     }

    //  printf("\n");

     for (int i = 1; i <=a; i++){
      for(int j=1;j<=a-i;j++){
        printf("  ");
      }
      for(int k=1;k<=i;k++){
        printf("%d ",k);
      }
      for(int m=i-1;m>=1;m--){
        printf("%d ",m);
      }
      printf("\n");
     }

    printf("\n");

     for (int i = 1; i <=a; i++){
      for(int j=1;j<=a-i;j++){
        printf("  ");
      }
      for(int k=1;k<=i;k++){
        char ch=(char)(k+64);
        printf("%c ",ch);
      }
      for(int m=i-1;m>=1;m--){
        char ch=(char)(m+64);
        printf("%c ",ch);
      }
      printf("\n");
     }
}

