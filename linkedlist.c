#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct ayush
{
    int data;
    struct ayush *next;
};
struct ayush *head=NULL;
void append(int i);
void showayush();
void countayush();

void main(){
    int n;
    printf("Enter the number of nodes: ");
    scanf("%d",&n);
    printf("\n-----ENETR THE VALUES OF THE NODES-----\n\n");
    for(int i=1;i<=n;i++){
        append(i);
    }
    printf("\n-----ELEMENTS OF NODES ARE-----\n\n");
    showayush();
    printf("\nTOTAL NUMBER OF NODES ARE: ");
    countayush();
}

void append(int i){
    struct ayush *temp;
    temp=(struct ayush*)malloc(sizeof(struct ayush));
    printf("Enter value in %d node: ",i);
    scanf("%d",&temp->data);
    temp->next=NULL;
    if(head==NULL)head=temp;
    else{
        struct ayush *p;
        p=head;
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
    }
}


void showayush(){
    struct ayush *p=head;
    if(p==NULL)printf("*****LIST IS EMPTY*****");
    else{
        while(p!=NULL){
            printf("Data->%d\n",p->data);
            p=p->next;
        }
    }
}

void countayush(){
    struct ayush *p=head;
    int count=0;
    if(p==NULL)printf("*****NO AVAILABLE NODES TO COUNT");
    else{
        while(p!=NULL){
            count+=1;
            p=p->next;
        }
    }
    printf("%d\n",count);
}