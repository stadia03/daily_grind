#include <bits/stdc++.h>
using namespace std;

class Node{
  public:
  int data;
  Node * prev;
  Node * next;
  int key;
  Node (int val,int keyVal){
    data=val;
    prev=NULL;
    next=NULL;
    key=keyVal;
  }
};

class LRUCache {
public:
    int capacity=0;
    Node * head;
    Node * tail;
    unordered_map<int,Node*>mpp;

    LRUCache(int capacityVal) {
        capacity=capacityVal;
        head= new Node(-1,-1);
        head->next=tail;
        tail= new Node(-1,-1);
        tail->prev=head;
    }
    
    int get(int key) {
        if(mpp.find(key)!=mpp.end()){
          Node * currNode=mpp[key];
          currNode->next->prev=currNode->prev;
          currNode->prev->next=currNode->next;
          currNode->next=head->next;
          currNode->prev=head;
          currNode->next->prev=currNode;
          head->next=currNode;
          return currNode->data;
        }else{
          return -1;
        }
    }
    
    void put(int key, int value) {
        if(mpp.find(key)!=mpp.end()){
          Node * currNode=mpp[key];
          currNode->next->prev=currNode->prev;
          currNode->prev->next=currNode->next;
          currNode->next=head->next;
          currNode->prev=head;
          currNode->next->prev=currNode;
          head->next=currNode;
          currNode->data=value;
        }else{
          if(!capacity){
            Node * delNode = tail->prev;
            delNode->prev->next=tail;
            tail->prev=delNode->prev;
            mpp.erase(delNode->key);
            delete(delNode);
            capacity++;
          }
             Node* currNode= new Node(value,key);
          currNode->next=head->next;
          currNode->prev=head;
          currNode->next->prev=currNode;
          head->next=currNode;
          capacity--;
          mpp[key]=currNode;
         
        }
    }
};

int main() {
 
  
 
  return 0;
}