#include<stdio.h>
#include<stdlib.h>

#define MAX 10

int stack[MAX], top=-1;

void PUSH(int val);
void POP();
void Peek();
void Display();

int main(){
    int choice, val;
    do{
        printf("\t\t\t\t>>>>> MAIN MENU <<<<<\n");
        printf("\t\t\t______________________________________\n");
        printf("\n\t1. To PUSH\n\t2. To Display\n\t3. To POP\n\t4. To PEEK\n\t0. To Exit\n\n");
        printf("Enter The Choice-> ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                printf("Value To Push-> ");
                scanf("%d", &val);
                PUSH(val);
                break;
            case 2:
                Display();
                break;
            case 3:
                POP();
                break;
            case 4:
                Peek();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid Choice!! Try Again!");
        }
    }while(choice!=0);
}


void PUSH(int val){
    if(top==MAX-1)printf(" WARNING! OVERFLOW\n ");
    else{
        top++;
        stack[top]=val;
    }
}

void POP(){
    if(top==-1)printf(" WARNING! UNDERFLOW\n ");
    else{
        printf("Popped Value is-> %d\n",stack[top]);
        top--;
    }
}


void Peek(){
    if(top==-1)printf(" WARNING! UNDERFLOW ");
    else{
        printf("Top Most Value Is-> %d\n",stack[top]);
    }
}


void Display(){
    if(top!=-1){
        printf("Stack Is");
        for(int i=top;i>=0;i--){
            printf("\n%d",stack[i]);
        }
    }
    else{
        printf("List Is Empty\n");
    }
}
