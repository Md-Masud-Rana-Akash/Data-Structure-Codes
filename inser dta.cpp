#include<stdio.h>
#include<stdlib.h>

struct Node{
  int data;
  struct Node* next;
};
struct Node* head;

void Insert(int x){
  struct Node* temp=(Node*)malloc(sizeof(struct Node));
  temp->data=x;
  //temp->next=NULL;
  //if(head!=NULL)
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
int main(){
  int i,x,n;
  printf("How many numbers?");
  scanf("%d",&n);
  for(i=0;i<n;i++){
       printf("Input the number ");
       scanf("%d",&x);
      Insert(x);
      print();
    }

return 0;
}
