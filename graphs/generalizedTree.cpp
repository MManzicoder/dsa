#include <iostream>
#include<bits/stdc++.h>
using namespace std;
struct Node{
    int value;
    Node *parent;
    vector<Node*> children;
};
Node * addNode(Node *parent, int value){
    Node *newNode = new Node();
    newNode->value = value;
    newNode->parent = parent;
    if(parent != NULL){
        parent->children.push_back(newNode);

    } 
    return newNode;
}

void bfsDisplay(Node *root){
    list<Node *> que;
    que.push_back(root);
    int size;
    while(!que.empty()){
        size = que.size();
      while(size>0){
          Node *current = que.front();
          cout<<current->value<<" ";
           for(Node *i: current->children){
             que.push_back(i);
        }
        size--;
        que.pop_front();
        }
        cout<<endl;
    }
}
int main(){
    Node * root = addNode(NULL, 4);
    Node *first = addNode(root,3);
    Node *second = addNode(root,5);
    Node *third = addNode(root,10);
    Node *sibling1 = addNode(first,7);
    Node *sibling2 = addNode(first,8);
    Node *sibling3 = addNode(second,9);
     bfsDisplay(root);
    return 0;
}