#include <iostream>
using namespace std;
static int stack[50];
int n = 10;
int top = -1;

int isFull(){
    if(top >=n-1)
       return 1;
    return 0;   
}
int isEmpty(){
    if(top==-1)
       return 1;
    return 0;   
}
 void display(){
     if(isEmpty()){
        cout<<"Stack is empty!"<<endl<<endl;
        return;
     }
     cout<<"Stack: ";   
     for(int i=top; i>=0; i--){
         cout<<stack[i]<<" ";
     }  
     cout<<endl;
     cout<<endl; 
 }
 void push(){
     if(isFull()){
        cout<<"Stack overflow"<<endl;
        cout<<endl<<endl;
        return;
    }
    int num;
    cout<<"Enter element: ";
    cin>>num; 
    top++;
    stack[top] = num;
    display();
    cout<<endl;
    cout<<endl;
 }
void pop(){
     if(top <=-1){
         cout<<"Stack underflow"<<endl;
         cout<<endl<<endl;
         return;
     }
     top--;
     display();
     cout<<endl<<endl;

 }

 void peek(){
     if(isEmpty()){
       cout<<"Empty stack!"<<endl;
       cout<<endl;
       cout<<endl;
     } 
     if(top >-1)
         cout<<"Peeked: "<<stack[top]<<endl;    
         display();
         cout<<endl;

 }
void ask(){
    int choice;
    cout<<"1. Display stack"<<endl;
    cout<<"2. Push"<<endl;
    cout<<"3. Pop"<<endl;
    cout<<"4. Peek"<<endl;
    cout<<"0. Quit"<<endl;
    cout<<"Enter your choice: ";
    cin>>choice;
    switch(choice){
        case 1:
           display();
           break;
        case 2: 
           push();
           break;
        case 3:
           pop();
           break;
        case 4:
          peek();
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
    while(true)
       ask();
 return 0;
}

