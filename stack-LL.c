#include<stdio.h>
#include<stdlib.h>

struct stack
{
    int data;
    struct stack *next;
};
struct stack *top=NULL;

void push();
void peek();
void display();
void POP();

void main(){
    int choice;
    do{
        printf("\t\t\t\t>>>>> MAIN MENU <<<<<\n");
        printf("\t\t\t______________________________________\n");
        printf("\n\t1. To PUSH\n\t2. To Display\n\t3. To POP\n\t4. To PEEK\n\t0. To Exit\n\n");
        printf("Enter The Choice-> ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                push();
                break;
            case 2:
                display();
                break;
            case 3:
                POP();
                break;
            case 4:
                peek();
                break;
            case 0:
                exit(0);
            default:
                printf("Invalid Choice!! Try Again!");
        }
    }while(choice!=0);
}


void push(){
    struct stack* temp;
    temp=(struct stack*)malloc(sizeof(struct stack));
    printf("Value To Inserst-> ");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if(top==NULL)top=temp;
    else{
        temp->next=top;
        top=temp;
    }
}


void POP(){
    struct stack* p=top;
    top=top->next;
    printf("Popped Value is-> %d",p->data);
    free(p);
}


void peek(){
    printf("Top Most Value Is-> %d", top->data);   
}


void display(){
    struct stack* p=top;
    if(p==NULL)printf("Stack Is Empty\n");
    else{
        while(p!=NULL){
            printf("\n%d",p->data);
            p=p->next;
        }
    }
}