#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node* next;
    };
struct Node* head;


void insertend(struct Node* head,int y){
    struct Node* p;
    struct Node* temp=(Node*)malloc(sizeof(struct Node));
    temp->data=y;
    p=head;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=temp;
    temp->next=NULL;
}


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
    int i,n,d,sr,ch,x;

    while(1){
                     printf("\n1. Add node to empty list / Add at beginning\n");
                     printf("2. Add node at the end\n");
                     printf("3. Delete from list\n");
                     printf("4. Exit\n\n");
                      scanf("%d",&ch);

    switch(ch){

 case 1:
    printf("how many numbers ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&x);
        insert(x);
        print();
       }
        break;

 case 2:
printf("Adding at the end");
        int ii,nn,y;
    printf("how many numbers ?");
    scanf("%d",&nn);
    for(ii=0;ii<nn;ii++){
        printf("Enter the number :");
        scanf("%d",&y);
       insertend(head,y);
        print();
    }
     break;

 case 3:
        printf("Which one do u want to search?");
        scanf("%d",&sr);
    if(search(sr)==1)
            printf("yes, the number is in the list\n");
    else
        printf("no, the number is not in the list\n");

        break;

  case 4:
        printf("\nWhich one do u want to remove?");
       scanf("%d",&d);
       delect(d);
       print();
       break;

  case 5:
        exit(1);

      default:
            printf("Invalid Input");
       }

    }

return 0;

}

