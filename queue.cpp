#include<bits/stdc++.h>

using namespace std;

struct Node{
    int data;
    struct Node* next;
};
struct Node* front=NULL;
struct Node* rear=NULL;




void enq(int x){
    struct Node* tmp=(Node*)malloc(sizeof(struct Node));
    tmp->data=x;
    tmp->next=NULL;
        if(front==NULL && rear==NULL){
            front=rear=tmp;
            return;
        }
        rear->next=tmp;
        rear=tmp;
}

void deq(){
    struct Node* tmp = front;
    if(front==NULL)
        return;
    else
        front=front->next;

    free(tmp);

}


void print(){
    struct Node* tmp=front;
    printf("List is:\n");

        while(tmp!=NULL){
        cout<<" "<<tmp->data;
        tmp=tmp->next;
    }
   printf("\n");
}




int main(){
int n,i,x;

cout<<"how many number\n";
cin>>n;

for(i=1;i<=n;i++){
    cout<<"Enter the number\n";
      cin>>x;
      enq(x);
      print();


}

deq();
print();
return 0;
}
