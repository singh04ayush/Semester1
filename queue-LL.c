#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
struct queue{
    int data;
    struct queue* next;
};
struct queue* front=NULL;
struct queue* rear=NULL;

void insert();
void delete();
void display();

void main(){
    int choice;
    printf("\t\t\t-----MAIN MENU OPERATIONS-----");
    printf("\n1.To insert\n2.To delete\n3.To display\n0.To exit\n");
    do{
        printf("\nEnter Choice-> ");
        scanf("%d", &choice);
        switch(choice){
            case 1:
                insert();
                break;
            case 2:
                delete();
                break;
            case 3:
                display();
                break;
            case 0:
                exit(0);
            default:
                printf("\nINAVLID CHOICE\n");
        }
    }while(choice!=0);
}

void insert(){
    struct queue* temp;
    temp=(struct queue*)malloc(sizeof(struct queue));
    printf("\nEnter Data-> ");
    scanf("%d", &temp->data);
    temp->next=NULL;
    if(front==NULL && rear==NULL){
        front=temp;
        rear=temp;
        front->next=NULL;
        rear->next=NULL;
    }
    else{
        rear->next=temp;
        rear=temp;
        rear->next=NULL;
    }
}

void delete(){
    struct queue* p=front;
    if(p==NULL)printf("\noverflow\n");
    else{
        front=front->next;
        free(p);
        printf("\nvalue deleted");
    }
}

void display(){
    struct queue* p=front;
    if(p==NULL)printf("\nQueue is empty");
    else{
        printf("\nQueue is ->  ");
        while(p!=NULL){
            printf(" %d",p->data);
            p=p->next;
        }
    }
}
