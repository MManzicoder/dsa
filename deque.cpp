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
                front++;
            }
            deque[front] = data;
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
        }
};
int main(){
    Deque *dq = new Deque(10);
    dq->addTofront(15);
    dq->addTofront(25);
    dq->addTofront(35);
    dq->addTofront(45);
    dq->addTofront(55);
    dq->display();
    return 0;
}