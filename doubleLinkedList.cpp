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
        Node *tail;
        DoubleLinkedList(){
            this->head = NULL;
            this->tail = NULL;
        }
        Node *addBefore(int data){
            Node *newNode = new Node(data);
            if(head == NULL){
                head = newNode;
                tail=newNode;
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
            tail = newNode;
            return newNode;
        }
        newNode->prev = tail;
        tail->next = newNode;
        tail = newNode;
        return newNode;
    }
        void printBackWard(){
        if(head == NULL){
            cout<<"Empty List!"<<endl;
            return;
        }
        Node *current = tail;
         while(current != NULL){
             cout<<current->data<<" ";
             current = current->prev;
         }
         cout<<endl;

    }
    void insertAfter(Node *node, int data){
        if(node == NULL){
            cout<<"Passed NULL Pointer"<<endl;
            return;
        }
       Node *newNode = new Node(data);
       if(node->next == NULL){
           this->addAfter(data);
           return;
       }
       Node *nextNode = node->next;
       node->next = newNode;
       newNode->prev = node;
       newNode->next = nextNode;
       nextNode->prev = newNode;
       
    }
    Node *getLastNode(){
        Node *tail = head;
        while(tail->next !=NULL){
           tail = tail->next;
        }
        return tail;
    }

};
void ask(DoubleLinkedList *dl){
    int choice;
    Node *sliceNode;
    cout<<"1. Display From head"<<endl;
    cout<<"2. Add Before"<<endl;
    cout<<"3. Add After"<<endl;
    cout<<"4. Display From Tail"<<endl;
    cout<<"5. Insert After"<<endl;
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
           sliceNode = dl->addBefore(el);
           break;
        case 3:
           cout<<"Enter element: ";
           cin>>el;
           dl->addAfter(el);
           break;
        case 4:
           dl->printBackWard();
           break;
        case 5:
           cout<<"Enter element: ";
           cin>>el;
           dl->insertAfter(sliceNode, el);
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
