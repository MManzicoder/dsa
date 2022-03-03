#include <iostream>
using namespace std;
#define MAX 100
class Deque{
    public: 
        int rear;
        int front;
        int size;
        int deque[MAX];
    public:  
        Deque(int size){
            this->rear = 0;
            this->front = -1;
            this->size = size;
        }    
        bool isEmpty(){
            if(front == -1) return true;
            return false;
        }
        bool isFull(){
            if((front == 0 && rear == size-1) || (front == rear +1)) return true;
            return false;
        }
        void addTofront(int data){
            if(isFull()) {
                cout<<"Deque is full"<<endl;
                return;
            }
            if(isEmpty()){
                front = 0;
                rear = 0;
            }else if(front == 0){
                front = size-1;
            }else {
                front--;
            }
            deque[front] = data;
            display();
            return;
        }
        void addTorear(int data){
            if(isFull()){
                cout<<"Deque is full"<<endl;
                return;
            }
            if(isEmpty()){
                front = 0;
                rear = 0;
            }else if(rear == size-1){
                rear = 0;
            }else{
                rear++;
            }
            deque[rear] = data;
            display();
            return;
        }
        void deleteFromfront(){
            if(isEmpty()){
                cout<<"Deque underflow, it is Empty!"<<endl;
                return;
            }
            if(front == rear){
                front = -1;
                rear = -1;
            }else if(front == size-1){
                front = 0;
            }else{
                front++;
            }
            display();
            return;
        }
        void deleteFromrear(){
            if(isEmpty()){
                cout<<"Deque underflow, it is Empty!"<<endl;
                return;                
            }
            if(front == rear){
                front = -1;
                rear = -1;
            }else if(rear == 0){
                rear = size-1;
            }else{
                rear--;
            }
            display();
            return;
        }
        void display(){
             if(isEmpty()){
                cout<<"Deque underflow, it is Empty!"<<endl;
                return;                
            }
            if(front > rear){
                for(int i=front; i<=size-1; i++){
                    cout<<deque[i]<<" ";
                }
                for(int j=0; j<=rear; j++){
                    cout<<deque[j]<<" ";
                }
            }else{
                for(int k=front; k<=rear; k++){
                    cout<<deque[k]<<" ";
                }
            } 
            cout<<endl;           
        }
};
void ask(Deque *dq){
  int choice;
  cout<<"1. Display\n";
  cout<<"2. Add to front\n";
  cout<<"3. Add to rear\n";
  cout<<"4. Delete from front\n";
  cout<<"5. Delete from rear\n";          
  cout<<"0. Exit\n";          
  cin>>choice;
  switch(choice){
      case 1: 
         dq->display();
         break;
      case 2: 
        int n;
        cout<<"Enter element to add to front!: ";
        cin>>n;
         dq->addTofront(n);
         break;          
      case 3: 
        int d;
        cout<<"Enter element to add to rear!: ";
        cin>>d;         
         dq->addTorear(d);
         break;       
      case 4: 
         dq->deleteFromfront();
         break;         
      case 5: 
         dq->deleteFromrear();
         break;
      case 0:
       exit(-1);                  
     default: 
       cout<<"Invalid choice try again!\n"<<endl;
  }
};
int main(){
      Deque *dq = new Deque(10);
      cout<<"Choose what to do"<<endl;
    while(true){
        ask(dq);
    }
    return 0;
}