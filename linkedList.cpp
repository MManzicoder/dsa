#include <iostream>
using namespace std;
class Node {
   public:
   int data;
   Node *next;
   public:
       Node(){
           this->next = NULL;
       }
       Node(int data){
           this->data = data;
           this->next = NULL;
       }
};
class LinkedList{
    public:
      Node *head;
      LinkedList(){
          this->head = NULL;
      }
    void addNewNode(int data){
        Node *newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return;
        }
        Node *temp = head;
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp->next = newNode;
    }
    void displayNodes(){
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        Node *temp = head;
        while(temp !=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }
    void deleteNode(int pos){
        if(head == NULL){
            cout<<"Empty list!";
            return;
        }
       if(pos == 1){
           Node *temp = head;
           head = head->next;
           delete temp;
           return;
       }
     int size = 0;
     Node *current = head;
     while(current != NULL){
         size++;
         current = current->next;
     }
     if(size < pos){
         cout<<"Out of Range operation";
         return;
     }
     current = head;
     Node *prev;
     while(pos > 1){
         pos--;
         prev = current;
         current = current->next;
     }
     prev->next = current->next;
     delete current;  
    }

  int isInRange(int pos){
           int size = 0;
     Node *current = head;
     while(current != NULL){
         size++;
         current = current->next;
     }
     if(pos > size){
         return -1;
     }
     return 1;
  }
 void insert(int pos, int data){
    Node *newNode = new Node(data);
    if(head == NULL){
        if(pos > 1){
            return;
        }
        head = newNode;
        return;
    }
        int inRange = isInRange(pos);
        if(inRange == -1){
            cout<<"Invalid operation"<<endl;
            return;
        }
      Node *prev = NULL;
      Node *current = head;
     int count = pos;
      while(count > 1){
         count--;
         prev = current;
         current = current->next;
     }
      if(pos == 1){
          Node *temp = head;
          head = newNode;
          head->next = temp;
          return;
      }
      prev->next = newNode;
      newNode->next = current;
 }
  Node* searchByPos(int pos){
     if(head == NULL){
         return NULL;
     }
     int count = 0;
     Node *current = head;
     while(current != NULL){
         count++;
         if(count == pos){
             return current;
         }
         current = current->next;
     }
     return NULL;
 }
 Node* searchByKey(int data){
     if(head == NULL){
         return NULL;
     }
     Node *current = head;
     while(current != NULL){
         if(current->data == data){
             return current;
         }
         current = current->next;
     }
     return NULL;
 }

};
int main(){
    LinkedList list;
    list.addNewNode(15);
    list.addNewNode(25);
    list.addNewNode(35);
    list.addNewNode(45);
    list.addNewNode(55);
    list.displayNodes();
    // list.deleteNode(1);

    list.insert(5, 75);
    Node *searchedNode;
    searchedNode = list.searchByKey(50);
    if(searchedNode == NULL){
        cout<<"Not found ";
        return -1;
    } 

    // cout<<"\nAfter deletion"<<endl;
    cout<<"\nsearched "<<searchedNode->data;
    // list.displayNodes();
    return 0;
}