#include<iostream>
#include<cstdio>
#include<stdlib.h>

using namespace std;

struct Node{
   int data;
   struct Node* next;
};
struct Node* head;

void insert(int x){
    struct Node* tmp=(Node*)malloc(sizeof(struct Node));
    tmp->data=x;
    tmp->next=head;
    head=tmp;

}

void print(){
    struct Node* tmp=head;
    printf("List is:\n");
    while(tmp!=NULL){
        cout<<" "<<tmp->data;
        tmp=tmp->next;
    }
    printf("\n");
}

int search(int sr){
    struct Node* tmp=head;
    while(tmp!=NULL){
        if(tmp->data==sr)
            return 1;
        tmp=tmp->next;
    }
       return 0;
}

void delect(){
  struct Node* tmp;
  if(head==NULL)
    return;
  tmp=head;
  head=tmp->next;
  free(tmp);

}


int main(){
int n,sr,x;
cout<<"How many Number ?\n";
cin>>n;

for(int i=1;i<=n;i++){
        cout<<"Enter the Number\n";
        cin>>x;
        insert(x);
        print();
}

cout<<"What do u want u to search\n";
cin>>sr;

if(search(sr)==1)
    cout<<"\n yes found";
else
    cout<<"\n not found";


delect();
print();

return 0;
}
