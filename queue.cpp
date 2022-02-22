#include <iostream>
using namespace std;
struct Queue{
   int front,rear,capacity;
   int * queue;
   Queue(int size){
       front=0;
       rear =0;
       capacity = size;
       queue = new int();
   }
   bool isEmpty(){
       if(rear == front)
          return false;
        return true;  
   }
   bool isFull(){
       if(rear == capacity)
           return true;
        return false;   
   }
   void enqueue(int data){
       if(rear == capacity){
           cout<<"The queue is full!"<<endl;
           return;
       }
      queue[rear] = data;
      rear++;
      display();
   }
   void display(){
       if(rear == front){
           cout<<"The queue is empty!"<<endl;
         return;
       }
       for(int i=front; i<rear; i++){
           cout<<queue[i]<<" ";
       }
       cout<<" "<<endl;
   }
   int readFront(){
       if(rear == front){
        cout<<"The queue is Empty!"<<endl;
        return -1;
       }
       int frontVal = queue[front];
       front++;
       return frontVal;       
   }
   void dequeue(){
       if(rear == front){
           cout<<"The queue is empty!"<<endl;
           return;
       }
       for(int i=0; i<rear-1; i++){
           queue[i] = queue[i+1];
       }
       rear--;
   }
   int dfront(){
       if(rear == front){
        cout<<"The queue is Empty!"<<endl;
        return -1;
       }
       return queue[front];
   }
};
void ask(Queue q){
    int choice;
    cout<<"1. Display"<<endl;
    cout<<"2. Enqueue"<<endl;
    cout<<"3. Deque"<<endl;
    cout<<"4. Front"<<endl;
    cout<<"0. Quit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
           q.display();
           break;
        case 2: 
           int el;
           cout<<"Enter element: ";
           cin>>el;
           q.enqueue(el);
           break;
        case 3:
           q.dequeue();
           break;
        case 4:
          q.dfront();
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
    cout<<"--------------------- Stack functionality! -----------------"<<endl<<endl;
static    Queue q = Queue(10);
    while(true)
       ask(q);
 return 0;
}
