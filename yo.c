#include<stdio.h>
#include<stdlib.h>
#define max 3
int stack[max];
int top=-1;
void push();
void pop();
void peek();
void display();
void isfull();
void isempty();
void main(){
    int choice;
    printf("1.to push\n2.to pop\n3.to peek\n4.to display\n5.to isfull\n6.to isempty\n0.to exit\n");
    do{
        printf("\nenter choice-> ");
        scanf("%d",&choice);
        switch(choice){
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            case 3:
            peek();
            break;
            case 4:
            display();
            break;
            case 5:
            isfull();
            break;
            case 6:
            isempty();
            break;
            case 0:
            exit(0);
            }
    }while(choice!=0);
}


void push(){
    if(top==max-1){
        printf("\noverflow");
        return;
    }
    int num;
    printf("\nelement to push-> ");
    scanf("%d", &num);
    stack[top++]=num;
    printf("pushed!");
}

void pop(){
    if(top==-1){
        printf("\nunderflow");
        return;
    }
    printf("\npoped value is %d",stack[top]);
    top-=1;
}

void peek(){
    if(top==-1){
        printf("\nstack is empty");
        return;
    }
    printf("\ntop value is %d",stack[top]);
}

void display(){
    if(top==-1){
        printf("\nstack is empty");
        return;
    }
    for(int i=top;i>=0;i--){
        printf("%d ",stack[i]);
    }
}

void isfull(){
    if(top==max-1)printf("\nYES");
    else printf("NO");
}

void isempty(){
    if(top==-1)printf("\nYES");
    else printf("\nNO");
}



