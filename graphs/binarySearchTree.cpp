#include <iostream>
#include <vector>
using namespace std;
class Node{
    public:
       int data;
       Node *left;
       Node *right;
       Node(int data){
           this->data = data;
           this->left = NULL;
           this->right = NULL;
       }
};
class BinaryTree{
    public:
      Node *root;
     BinaryTree(){
       this->root = NULL;
     }
     Node * addNode(Node * current, int data){

         if(current == NULL){
             current = new Node(data);
         }else{
            if(data < current->data){
                current->left = addNode(current->left, data);
            }else if(data > current->data){
                current->right = addNode(current->right, data);
            }
         }
        
         return current;
     }
     void inorderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         inorderTraversal(current->left);
         cout<<current->data<<" ";
         inorderTraversal(current->right);
     }
     void preOrderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         cout<<current->data<<" ";
         preOrderTraversal(current->left);
         preOrderTraversal(current->right);
     }
     void postOrderTraversal(Node *current){
         if(current == NULL){
             return;
         }
         postOrderTraversal(current->left);
         postOrderTraversal(current->right);
         cout<<current->data<<" ";         
     }
 };
void addAllNodes(Node *root, vector<int> nodes, BinaryTree bt){
     for(auto n: nodes){
        bt.addNode(root, n);
    }
}
int main(){
    vector<int> nodes = {5, 3,8,2,4,7,9,100,40,200,70};
    BinaryTree bt;
    Node *root = bt.addNode(NULL, 10);
    addAllNodes(root, nodes, bt);
    bt.inorderTraversal(root);
       return 0;
}