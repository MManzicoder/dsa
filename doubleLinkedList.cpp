#include <iostream>
using namespace std;
struct Node {
    public: 
         Node *prev;
         int data;
         Node * next;
         Node(int data){
             this->prev = NULL;
             this->data = data;
             this->next = NULL;
         }
};
struct DoubleLinkedList{
    public:
        Node * head;
        DoubleLinkedList(){
            this->head = NULL;
        }
        Node *addBefore(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                return newNode;
            }
            head->prev = newNode;
            newNode->next = head;
            head = newNode;
            return newNode;
        }
      void displayList(){
          if(head == NULL){
              cout<<"Empty List !!!"<<endl;
              return;
          }
          Node *current = head;
          while(current != NULL){
              cout<<current->data<<" ";
              current = current->next;
          }
      }
    Node * addAfter(int data){
        Node * newNode = new Node(data);
        if(head == NULL){
            head = newNode;
            return newNode;
        }
        Node *current = head;
        while(current->next != NULL){
            current = current->next;
        }
        newNode->prev = current;
        current->next = newNode;
        return newNode;
    }
};
void ask(DoubleLinkedList *dl){
    int choice;
    cout<<"1. Display"<<endl;
    cout<<"2. Add Before"<<endl;
    cout<<"3. Add After"<<endl;
    cout<<"0. Quit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
           dl->displayList();
           break;
        case 2: 
           int el;
           cout<<"Enter element: ";
           cin>>el;
           dl->addBefore(el);
           break;
        case 3:
           cout<<"Enter element: ";
           cin>>el;
           dl->addAfter(el);
           break;
        case 0:
          exit(-1);           
          break;
        default: 
           cout<<"Enter valid choice!"<<endl<<endl;
           break;
    }
}
int main(){
    cout<<"--------------------- Double Linked List functionality! -----------------"<<endl<<endl;
 static DoubleLinkedList *dl = new DoubleLinkedList();

    while(true)
       ask(dl);
 return 0;
}
