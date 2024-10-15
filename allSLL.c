#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

struct ayush
{
    int data;
    struct ayush *next;
};
struct ayush *head=NULL;

void append();
void show_ayush();
int count_ayush();
void insert_at_begin();
void insert_at_end();
void insert_at_before();
void insert_at_after();
void delete_at_begin();
void delete_at_end();
void delete_at_befor();
void delete_at_after();
void reverse1_node();
void reverse2(struct ayush** head_ref);
void multiplyByTen();
int isSorted();
int isPalindrome();
void swapNodes();
void main(){
    int choice;
    do {
        printf("\n               -------Linked List Operations-------\n");
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
        printf("12. Reverse the node\n13 to reverse using recurssion\n14 to multiply by ten\n15 to check is sorted\n16.To check palindrome\n17.To swap nodes\n");
        printf("0. Exit\n");
        printf("\n>>>>>>>>>Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                append();
                break;
            case 2:
                show_ayush();
                break;
            case 3:
                printf("\nTotal no. of Nodes are:%d",count_ayush());
                break;
            case 4:
                insert_at_begin();
                break;
            case 5:
                insert_at_end();
                break;
            case 6:
                insert_at_before();
                break;
            case 7:
                insert_at_after();
                break;
            case 8:
                delete_at_begin();
                break;
            case 9:
                delete_at_end();
                break;
            case 10:
                delete_at_befor();
                break;
            case 11:
                delete_at_after();
                break;
            case 12:
                reverse1_node();
                break;
            case 13:
                reverse2(&head);
                break;
            case 14:
                multiplyByTen();
                break;
            case 15:
                if (isSorted())
                    printf("\nElements are sorted in ascending order");
                else printf("\nNot in ascnding order");   
                break;
            case 16:
                if(isPalindrome()) printf("\nLinked list is palindrome\n");
                else printf("\nLinked list is not palindrome\n");
                break;
            case 17:
                swapNodes();
                break;
            case 0:
                printf("Exiting program.\n");
                break;
            default:
                printf("Invalid choice. Try again.\n");
        }
    } while (choice != 0);
    
}

void append(){
    int n;
    printf("\nEnter the number of nodes: ");
    scanf("%d",&n);
    printf("\n-----ENETR THE VALUES OF THE NODES-----\n\n");
    for(int i=1;i<=n;i++){
        struct ayush* temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("Enter value in node: ");
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
}


void show_ayush(){
    struct ayush *p=head;
    if(p==NULL)printf("\n*****LIST IS EMPTY*****\n");
    else{
        printf("\n");
        while(p!=NULL){
            printf(" %d",p->data);
            p=p->next;
        }
    }
}

int count_ayush(){
    struct ayush *p=head;
    int count=0;
    if(p==NULL)printf("*****NO AVAILABLE NODES TO COUNT");
    else{
        while(p!=NULL){
            count+=1;
            p=p->next;
        }
    }
    return count;
}

void insert_at_begin(){
    struct ayush *temp;
    temp=(struct ayush*)malloc(sizeof(struct ayush));
    printf("\nEnter the value to insert: ");
    scanf("%d",&temp->data);
    temp->next=head;
    head=temp;
}

void insert_at_end(){
    struct ayush *temp;
    temp=(struct ayush*)malloc(sizeof(struct ayush));
    printf("\nEnter the value to insert: ");
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

void insert_at_before(){
    int pos;
    printf("\nEnter the Position: ");
    scanf("%d",&pos);
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    int len=count_ayush();
    if(pos>len)printf("\n*****Insertion Not Possible*****\n");
    else{
        int i=1;
        struct ayush* p=head;
        while(i<pos){
            p=p->next;
            i++;
        }
        struct ayush *temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("\nEnter the value to insert: ");
        scanf("%d",&temp->data);
        temp->next=p->next;
        p->next=temp;
    }
    
}

void insert_at_after(){
    int pos;
    printf("\nEnter the Position: ");
    scanf("%d",&pos);
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    int len=count_ayush();
    if(pos>len)printf("\n*****Insertion Not Possible*****\n");
    else{
        int i=1;
        struct ayush* p=head;
        while(i<=pos){
            p=p->next;
            i++;
        }
        struct ayush *temp;
        temp=(struct ayush*)malloc(sizeof(struct ayush));
        printf("\nEnter the value to insert: ");
        scanf("%d",&temp->data);
        temp->next=p->next;
        p->next=temp;
    }
}

void delete_at_begin(){
    struct ayush* p=head;
    if(head==NULL)printf("\n*****UNDERFLOW*****\n");
    else{
        head=p->next;
        p->next=NULL;
        free(p);
    }
    printf("\nAfter Deletion, the Linked List is:\n");
    show_ayush();
}

void delete_at_end(){
    struct ayush* p=head, *q;
    if(head==NULL)printf("*****UNDERFLOW*****");
    else{
        while(p->next!=NULL){
            q=p;
            p=p->next;
        }
        free(p);
        q->next=NULL;
    }
    printf("\nAfter Deletion, the Linked List is:\n");
    show_ayush();
}

void delete_at_befor(){
    int pos,len=count_ayush();
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    if(pos>len)printf("\n*****INVALID INPUT*****\n");
    else{
        struct ayush* p=head, *q;
        if(head==NULL)printf("*****NO NODE TO DELETE*****");
        int i=1;
        while(i<pos-1){
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        p->next=NULL;
        free(p);
    }
    printf("\nAfter Deletion, the Linked List is:\n");
    show_ayush();
}

void delete_at_after(){
    int pos,len=count_ayush();
    printf("\nEnter the position: ");
    scanf("%d",&pos);
    if (pos < 1) {
        printf("Invalid position.\n");
        return;
    }
    if(pos>len)printf("\n*****INVALID INPUT*****\n");
    else{
        struct ayush* p=head, *q;
        if(head==NULL)printf("*****NO NODE TO DELETE*****");
        int i=1;
        while(i<=pos){
            q=p;
            p=p->next;
            i++;
        }
        q->next=p->next;
        p->next=NULL;
        free(p);
    }
    printf("\nAfter Deletion, the Linked List is:\n");
    show_ayush();
}

void reverse1_node() {
    struct ayush* current = head;
    struct ayush* backward = NULL, *forward=NULL;
    while (current != NULL) {
        forward = current->next;
        current->next = backward;
        backward = current;
        current = forward;
    }
    head = backward;
    printf("\nAfter Reversing the Linked List:\n");
    show_ayush();
}

void reverse2(struct ayush** head_ref) {
    struct ayush* first;
    struct ayush* rest;

    if (*head_ref == NULL)
       return;   

    first = *head_ref;  
    rest  = first->next;

    if (rest == NULL)
       return;   

    reverse2(&rest);
    first->next->next  = first;  
    first->next  = NULL;          

    *head_ref = rest;             
}

void multiplyByTen() {
    struct ayush* p=head;
    if(head==NULL) printf("\nno elements to mutiply");
    else{
        while (p != NULL) {
            p->data = p->data * 10;
            p = p->next;
        }
    }
}

int isSorted() {
    struct ayush* p = head;

    while (p->next != NULL) {
        if (p->data > p->next->data)
            return 0;
        p = p->next;
    }
    return 1;
}

int isPalindrome() {
    struct ayush* slow = head;
    struct ayush* fast = head;
    while (fast != NULL && fast->next != NULL) {
        slow = slow->next;
        fast = fast->next->next;
    }
    if (fast != NULL) { // odd nodes: let right half smaller
        slow = slow->next;
    }
    // head = slow;
    reverse2(&slow);
    fast = head;
    while (slow != NULL) {
        if (fast->data != slow->data) {
            return 0;
        }
        fast = fast->next;
        slow = slow->next;
    }
    return 1;
}

void swapNodes() {
    int k, len = count_ayush();
    printf("enter position to swap: ");
    scanf("%d",&k);
    if (k > len) {
        printf("Invalid value of k\n");
        return;
    }
    if (2*k-1 == len) {
        printf("No need to swap nodes\n");
        return;
    }
    struct ayush *p = head, *p_prev = NULL;
    for (int i = 1; i < k; i++) {
        p_prev = p;
        p = p->next;
    }
    struct ayush *q = head, *q_prev = NULL;
    for (int i = 1; i < len-k+1; i++) {
        q_prev = q;
        q = q->next;
    }
    if (p_prev)p_prev->next = q;
    if (q_prev)q_prev->next = p;
    struct ayush *temp = p->next;
    p->next = q->next;
    q->next = temp;
    if (k == 1)head = q;
    if (k == len)head = p;
}



// void reverse_node(){
//     struct ayush* p, *q;
//     p=q=head;
//     int len=count_ayush();
//     int i=1,j=len;
//     while(i<j){
//         int k=1;
//         while(k<j){
//             q=q->next;
//             k++;
//         }
//         int temp=p->data;
//         p->data=q->data;
//         q->data=temp;
//         i++,j++;
//         p=p->next, q=head;
//     }
// }
//