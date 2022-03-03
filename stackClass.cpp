#include <iostream>
using namespace std;

#define MAX 100

class Stack {
int top;

public:
	int a[MAX];
	Stack() { top = -1; }
	bool push();
	void pop();
	void peek();
	bool isEmpty();
    bool isFull();
};
bool Stack::isFull(){
    return (top >= (MAX-1));
}
bool Stack::push()
{
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

int Stack::pop()
{
     if(top <=-1){
         cout<<"Stack underflow"<<endl;
         cout<<endl<<endl;
         return;
     }
     top--;
     display();
     cout<<endl<<endl;
}

void Stack::peek()
{
     if(top <=-1){
     if(isEmpty()){
       cout<<"Empty stack!"<<endl;
       cout<<endl;
       cout<<endl;
     } 
     if(top >-1)
         cout<<"Peeked: "<<stack[top]<<endl;    
        //  display();
         cout<<endl;

}

bool Stack::isEmpty()
{
	return (top < 0);
}
void ask(){
 class    Stack st;
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
           st.display();
           break;
        case 2: 
           st.push();
           break;
        case 3:
           st.pop();
           break;
        case 4:
          st.peek();
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

