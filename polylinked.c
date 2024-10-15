#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<math.h>

struct polynomial {
    int cofficient;
    int expo;
    struct polynomial* next;
};
struct polynomial* head=NULL;
struct polynomial* head2=NULL;

void append();
void display();
void evaluate();
void concatenate();


void main(){
    int choice;
    do{
        printf("\n 1.To create\n2.Display\n3.To evaluate\n4.To concatenate another polynomial\n0.To exit");
        printf(">>>>\nEnter choice: ");
        scanf("%d",&choice);

        switch(choice){
            case 1:
                append();
                break;
            case 2:
                display();
                break;
            case 3:
                evaluate();
                break;
            case 4:
                concatenate();
                break;
            case 0:
                printf("\nProgram exited");
                exit(0);
            default:
                printf("Enter valid choice!TRY AGAIN");
        }
    } while(choice!=0);
}

void append(){
    int n;
    printf("\nEnter the no of polynomial terms:");
    scanf("%d",&n);
    printf("\n--------ENTER THE VALUES-----\n");
    for(int i=1;i<=n;i++){
        struct polynomial* temp;
        temp=(struct polynomial*)malloc(sizeof(struct polynomial));
        printf("\nEnter cofficient part: ");
        scanf("%d",&temp->cofficient);
        printf("\nEnter exponential part: ");
        scanf("%d",&temp->expo);
        temp->next=NULL;
        if(head==NULL)head=temp;
        else{
            struct polynomial* p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=temp;
        }
    }
}

void display(){
    struct polynomial* p=head;
    if(p==NULL)printf("\nLinked list is empty\n");
    else{
        while(p!=NULL){
            printf(" %dx^%d",p->cofficient,p->expo);
            p=p->next;
        }
    }
}

void evaluate() {
    int x;
    printf("\nEnter the value of x: ");
    scanf("%d",&x);
    float result = 0.0;
    struct polynomial* temp = head;
    while (temp != NULL) {
        result += temp->cofficient * pow(x, temp->expo);
        temp = temp->next;
    }
    printf("\nANSWER IS-> %f",result);
}

void concatenate(){
    int n;
    printf("\nEnter the no of 2nd polynomial terms:");
    scanf("%d",&n);
    printf("\n--------ENTER THE VALUES-----\n");
    for(int i=1;i<=n;i++){
        struct polynomial* poly2;
        poly2=(struct polynomial*)malloc(sizeof(struct polynomial));
        printf("\nEnter cofficient part: ");
        scanf("%d",&poly2->cofficient);
        printf("\nEnter exponential part: ");
        scanf("%d",&poly2->expo);
        poly2->next=NULL;
        if(head2==NULL)head2=poly2;
        else{
            struct polynomial* p=head2;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=poly2;
        }
    }
    struct polynomial* q=head;
    while(q->next!=NULL){
        q=q->next;
    }
    q->next=head2;
    head2=NULL;
}

