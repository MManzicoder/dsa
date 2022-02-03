#include <iostream>
using namespace std;
class Node{
	//IT WILL be a node if it has two sections
	public:
	    int data;
	    Node* next;
	public:
		Node(){
			this->next = NULL;
		}
		Node(int data){
			this->data = data;
			this->next = NULL;
		}
};
class linkedList{
	public:
		Node* head;
	public:
		linkedList(){
			head = NULL;
		}
		void addNewNode(int data){
			Node* newNode = new Node(data);
			if(head == NULL){
				head = newNode;
				return;
			}
			Node *temp = head;
			while(temp->next != NULL){
				temp = temp -> next;
			}
			temp->next = newNode;
		}
		
		void displayNode(){
			if(head == NULL){
				cout << "Empty list" << endl;
			}
			Node *temp = head;
			
			while(temp != NULL){
				cout << temp -> data << "\t";
				temp = temp -> next;
			}
		}
		void deleteNode(int position){
			if(head == NULL ){
				cout << "Empty list" << endl;
				return;
			}
			if(position == 1){
				//delete , if you use head = head->next; delete head you will be deleting the new head
				
				Node* temp = head;
				head = head -> next;
				delete temp;
				return;
			}
			int size = 0;
			//findig the size of list
			Node* current = head;
			while(current != NULL){
				size++;
				current = current -> next;
			}
			if(size<position){
				cout << "Invalid operation";
				return;
			}
			
			current = head;
			Node* previous;
			
			while(position > 1){
				position--;
				previous = current;
				current = current->next;
			}
			previous->next = current -> next;
			delete current; // u can also say free
		}
		
		void insertNode(int position,int data){
		    Node* newNode = new Node(data);
			if(head == NULL){
				if(position>1) return;
				head = newNode;
				return;
			}
			Node* current = head;
			int size = 0;
			while(current != NULL){
				size ++;
				current = current->next;
			}
			if(size < position){
				cout << "Invalid operation";
				return;
			}
			if(position == 1){
				Node *temp = head;
				//head = newNode;
				//head->next = temp;
				newNode->next = temp;
				head = newNode;
				return;
			}
			Node *previous;
			current = head;
			while(position > 1){
				position --;
				previous = current;
				current = current -> next;
			}
			previous->next = newNode;
			newNode -> next = current;
			
		}
		
		Node* searchByPosition(int position){
			if(head == NULL )
				return NULL;
			
//			int size = 0;
			
			Node* current = head;
//			while(current != NULL){
//				size ++;
//				current = current -> next;
//			}
//			if(size < position) return NULL;
//			
//			current = head;
//			size = 0;
//			
//			while(current != NULL){
//				count ++;
//				if(count == position)
//				   return current;
//				current = current -> next;
//			}
			int count = 0;
			while(current != NULL ){
				count ++;
				if(count == position)
					return current;
				
				current = current -> next;
			}
		}
		
		Node* searchByKey(int value){
			if(head == NULL){
				return NULL;
			}
			int count = 0;
			Node *current = head;
			while(current != NULL){
				count ++;
				if(current -> data == value){
					return current;
				}
				current = current->next;
			}
			return NULL;
		}
};
int main(){
	//creating a variable of linkedList
	
	linkedList list;
	list.addNewNode(5);
	
//	linkedList list1;
	list.addNewNode(7);
	
//	linkedList list2;
//	list.addNewNode(8);
	
//	linkedList list3;
//	list.addNewNode(59);
	
//	linkedList list4;
//	list.addNewNode(0);
	
	list.displayNode();
	
//	list.deleteNode(1);
	
	cout << endl;
	
//	list.displayNode();
	
	list.insertNode(2,10);
	
	list.displayNode();
	
	cout << endl;
	
	Node* result = list.searchByPosition(2);
	
	cout << result -> data << "\t" << result -> next;
	
	
}
