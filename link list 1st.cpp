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

int search(int s){
    int c=0;
    struct Node* temp=head;
    while(temp!=NULL){
        if(temp->data==s){
            c++;
            break;
            return c;
          temp=temp->next;
         }
         else
            return c;
    }
}


    int main(){
    int i,n,d,s,z,x;
    printf("how many numbers ?");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter the number :");
        scanf("%d",&x);
        insert(x);
        print();
        }

        printf("what do you want?\n1.Search?\n2.Delect?");
        scanf("%d",&z);

    if(z==1){
        printf("Which one do u want to search?");
        scanf("%d",&s);
        int p=search(s);
        if(p!=0)
            printf("Found \n");
        else
            printf("not Found \n");
        }

    else if(z==2){
        printf("Which one do u want to remove?");
       scanf("%d",&d);
       delect(d);
       print();
       }
    else
        printf("Invalid Input");

     return 0;
    }
