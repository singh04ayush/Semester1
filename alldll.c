#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct ayush {
    struct ayush* prev;
    int data;
    struct ayush* next;
};
struct ayush* head=NULL;

void append();
void display();
int length();
void insert_at_begin();
void insert_at_end();
void insert_before();
void insert_after();
void delete_at_begin();
void delete_at_end();
void delete_before();
void delete_after();
void reverse_node();

void main(){
    int choice;
    do {
        printf("\n           -------DoubleLinked List Operations-------\n");
        printf("\n1. Create a node\n");
        printf("2. Display the node\n");
        printf("3.Length of node\n");
        printf("4. Insert at the beginning\n");
        printf("5. Insert at the end\n");
        printf("6. Inster before a specificed position\n");
        printf("7. Inster after a specificed position\n");
        printf("8. Delete at the Beginning\n");
        printf("9. Delete at the End\n");
        printf("10. Delete before a specificed position\n");
        printf("11. Delete after a specificed position\n");
        printf("12. Reverse the node\n");
        printf("0. Exit\n");
        printf("\n>>>>>>>>>Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                append();
                break;
            case 2:
                display();
                break;
            case 3:
                printf("\nTotal no. of Nodes are:%d",length());
                break;
            case 4:
                insert_at_begin();
                break;
            case 5:
                insert_at_end();
                break;
            case 6:
                insert_before();
                break;
            case 7:
                insert_after();
                break;
            case 8:
                delete_at_begin();
                break;
            case 9:
                delete_at_end();
                break;
            case 10:
                delete_before();
                break;
            case 11:
                delete_after();
                break;
            case 12:
                reverse_node();
                break;
            case 0:
                printf("\nExiting program");
                exit(0);
            default:
                printf("Invalid choice! Try again");
        }
    } while(choice!= 0);
}


void append(){
    int n;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        struct ayush* temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("\nEnter values: ");
        scanf("%d", &temp->data);
        if(head==NULL){
            head=temp;
            temp->prev=NULL;
            temp->next=NULL;
        }
        else{
            struct ayush*p=head;
            while(p->next!=NULL){
                p=p->next;
            }
            p->next=temp;
            temp->prev=p;
            temp->next=NULL;
        }
    }
}

void display(){
    struct ayush* p=head;
    if(p==NULL)printf("\nDouble linked list is empty\n");
    else{
        while(p!=NULL){
            printf(" %d", p->data);
            p=p->next;
        }
    }
}

int length(){
    struct ayush* p=head;
    if(p==NULL) return 0;
    else{
        int count=0;
        while(p!=NULL){
            count+=1;
            p=p->next;
        }
    return count;
    }
}

void insert_at_begin(){
    struct ayush* temp;
    temp=(struct ayush*)malloc(sizeof(struct ayush));
    printf("Enter the value to insert: ");
    scanf("%d", &temp->data);
    temp->next=head;
    temp->prev=NULL;
    head->prev=temp;
    head=temp;
}

void insert_at_end(){
    struct ayush* temp;
    temp=(struct ayush*)malloc(sizeof(struct ayush));
    printf("Enter the value to insert: ");
    scanf("%d", &temp->data);
    temp->next=NULL;
    struct ayush* p=head;
    if (p==NULL) p=head;
    else{
        while(p->next!=NULL){
            p=p->next;
        }
        p->next=temp;
        temp->prev=p;
    }
}

void insert_before(){
    int pos, len=length();
    printf("Enter the position: ");
    scanf("%d",&pos);
    if(pos<1)printf("\nInvalid input");
    if(pos>len)printf("\nUNDERFLOW");
    else{
        struct ayush*p =head;
        int i=1;
        while(i<pos){
            p=p->next;
            i++;
        }
        struct ayush* temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("\nEnter value to insert: ");
        scanf("%d",&temp->data);
        temp->next=p;
        temp->prev=p->prev;
        p->prev->next=temp;
        p->prev=temp;
    }  
}

void insert_after(){
    int pos, len=length();
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if(pos<1)printf("\nINvalid INput");
    if(pos>len)printf("\nUNDERFLOW");
    else{
        struct ayush* p=head;
        int i=1;
        while(i<pos){
            p=p->next;
            i++;
        }

        struct ayush* temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("\nEnter value to insert: ");
        scanf("%d",&temp->data);
        temp->prev=p;
        temp->next=p->next;
        p->next->prev=temp;
        p->next=temp;
    }
}

void delete_at_begin(){
    struct ayush* p=head;
    p->next->prev=NULL;
    head=head->next;
    free(p);
    printf("\nLinked list after deleting first node\n");
    display();
}

void delete_at_end(){
    struct ayush*p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->prev->next=NULL;
    free(p);
    printf("\nLinked list after deleting last node\n");
    display();
}

void delete_before(){
    int pos, len=length();
    printf("\nEnter the postion: ");
    scanf("%d",&pos);
    if(pos<1)printf("\nInvalid Input\n");
    else if(pos>len)printf("\nUnderflow\n");
    else if(pos-1==1) delete_at_begin();
    else{
        int i=1;
        struct ayush*p=head;
        while(i<pos-1){
            p=p->next;
            i++;
        }
        p->prev->next=p->next;
        p->next->prev=p->prev;
        free(p);
        printf("\nAFter deleting the node\n");
        display();
    }
}

void delete_after(){
    int x,pos, len=length();
    printf("\nEnter the postion: ");
    scanf("%d",&pos);
    if(pos<1)printf("\nInvalid Input\n");
    else if(pos>len){
        printf("\nUnderflow\n");
    }
    
    else if(pos+1==len){
        delete_at_end();
    }
    else{
        int i=1;
        struct ayush*p=head;
        while(i<pos){
            p=p->next;
            i++;
        }
        p->prev->next=p->next;
        p->next->prev=p->prev;
        free(p);
        printf("\nAFter deleting the node\n");
        display();
    }
}

void reverse_node(){
    struct ayush* temp = NULL;
    struct ayush* current = head;
    while (current != NULL) {
        temp = current->prev;
        current->prev = current->next;
        current->next = temp;
        current = current->prev;
    }
    if(temp != NULL ) {
        head = temp->prev;
    }
    printf("\nAFTER REVERSING THE NODE:\n");
    display();
}
