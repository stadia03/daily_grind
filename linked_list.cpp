#include <bits/stdc++.h>
using namespace std;
 

struct node{
  int data;
  struct node * next;
};
struct node * head ;

  
void beginsert ();   
void lastinsert ();  
// void randominsert();  
void begin_delete();  
void last_delete();  
// void random_delete();  
void display();  
void search();


void beginsert(int value){
  struct node * nn = (struct node *)malloc(sizeof(struct node));
  nn->data=value;
  nn->next = head;
  head=nn;
}

void lastinsert(int value){

  struct node * nn= (struct node * )malloc(sizeof(struct node));
  nn->data=value;
  struct node * ptr=head;
  while(ptr-> next !=NULL){
    ptr=ptr->next;
  }
  ptr->next=nn;
  nn->next=NULL;

}


void begin_delete(){
  struct node * ptr=head ;

  head = ptr->next;
  free(ptr);
}

void last_delete(){
  struct node  * ptr0;
   struct node  * ptr=head;
  while(ptr->next !=NULL){
    ptr0=ptr;
    ptr=ptr->next;
  }
  ptr0->next=NULL;
  free(ptr);

}
void display(){
  //cout<<"ca;;ed";
  struct node * ptr= head;
  while(ptr!=NULL){
    cout<< ptr->data<<" ";
    ptr=ptr->next;
  }
}


void search(int value){
  struct node * ptr =head;
  int flag =0,i=0;
  while(ptr->next !=NULL){
    if(ptr->data == value){
      cout<<"found at index "<<i<<endl;
      flag=1;
    }
  }
  if(!flag)cout<<"not found";
}


int main() {
 
  
    beginsert(2);
    beginsert(3);
    beginsert(4);
    beginsert(5);
 
     lastinsert(66);
      lastinsert(78);
       lastinsert(102);
   display();
 
  return 0;
}