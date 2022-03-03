#include<iostream>
using namespace std;

class Node{
      public:  
         int data;
         Node *next;
      public:   
         Node(int dat){
            data = dat;
            next = NULL;
        }    
};
class Queue{
    public:
         Node *front;
         Node *rear;
    public:
        Queue(){
            front = rear = NULL;
        }    
        void enqueue(int data){
           Node *temp = new Node(data);
           if(front == NULL){
               front = rear = temp;
               display();
               return;
           }
           rear->next = temp;
           rear = temp;
           cout<<endl;
           display();
           return;
        }    
        void display(){
            if(front == NULL){
                cout<<"Empty queue"<<endl;
                return;
            }
            Node *current = front;
            while(current){
                cout<<current->data<<" ";
                current = current->next;
            }
        }
        void dequeue(){
            if(front == NULL){
                cout<<"Queue underflow!!!"<<endl;
                return;
            }
            Node *temp = front;
            front = front->next;
            if(front == NULL){
               rear = NULL;
            }
            delete temp;
            cout<<endl;
            display();
            return;
        }
};
int main(){
  Queue que;
  que.enqueue(15);
//   que.enqueue(35);
//   que.enqueue(25);
//   que.enqueue(75);
//   que.enqueue(90);
  que.dequeue();
  que.enqueue(90);
  que.enqueue(75);
  que.enqueue(25);
  que.enqueue(95);
  
//   que.display();
    return 0;
}