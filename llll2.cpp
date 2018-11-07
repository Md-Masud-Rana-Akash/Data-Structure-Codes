
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    };
struct Node* head;


void insert(int x){
   struct Node* temp=(Node*)malloc(sizeof(struct Node));
    temp->data=x;
    //temp->next=NULL;
   // if(head!=NULL)
        temp->next=head;
        head=temp;
}


void print(){
    struct Node* temp=head;
    printf("List is: ");
    while(temp!=NULL){
            printf("%d ",temp->data);
        temp=temp->next;
    }
    printf("\n");
}


void delect(int d){
    struct Node* temp=head;
    struct Node* prev=NULL;
    while(temp!=NULL){
       if(temp->data==d){
        if(prev==NULL){
            head=temp->next;
        }
         else
            prev->next=temp->next;
            break;
       }
       prev=temp;
       temp=temp->next;
    }
}

int search(int sr){
    struct Node* temp=head;
    while(temp!=NULL){
        if(temp->data==sr)
        return 1;
        temp=temp->next;

    }
            return 0;
}


    int main(){
    int i,n,d,sr,x;
    printf("how many numbers ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&x);
        insert(x);
        print();
        }

        printf("Which one do u want to search?");
        scanf("%d",&sr);

        if(search(sr)==1)
            printf("yes, the number is in the list\n");
    else
        printf("no, the number is not in the list\n");




        printf("\nWhich one do u want to remove?");
       scanf("%d",&d);
       delect(d);
       print();

     return 0;
    }

