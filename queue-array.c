#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

#define max 10
int queue[max], front=-1, rear=-1;

void insert();
void delete();
void display();

void main(){
    int choice;
    printf("\t\t\t-----QUEUE MAIN MENU OPERATIONS-----\n");
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
                printf("\nINAVLID CHOICE TRY AGAIN!\n");
        }
    }while(choice!=0);
}

void insert(){
    if(front==-1 && rear==-1){
        front=0;
        rear=0;
        printf("Enter value-> ");
        scanf("%d",&queue[rear]);
    }
    else{
        if(rear==max-1){
            printf("\nOVERFOLW\n");
        }
        else{
            rear+=1;
            printf("Enter value-> ");
            scanf("%d",&queue[rear]);
        }
    }

}


void delete(){
    if(front==-1 || front>rear){
        printf("\nUNDERFLOW\n");
    }
    else{
        if(front==rear){
            front=-1;
            rear=-1;
            printf("\nvalue deleted\n");
        }
        else{
            front+=1;
            printf("\nValue deleted\n");
        }
    }
}

void display(){
    if(front==-1)printf("\nQueue is empty\n");
    else{
        for(int i=front;i<=rear;i++){
            printf(" %d",queue[i]);
        
        }
    }
}
