#include <iostream>
#include <vector>
using namespace std;
 class AdjacencyList{
     private:
        int nodes;
        vector<int> *list;
    public:
       AdjacencyList(int nodes){
           this->nodes = nodes;
           list = new vector<int>[nodes];
       }
       void displayList(){
           for(int i=0; i<nodes; i++){
               cout<<"Node "<<i;
               for(auto v: list[i])
                  cout<<"->"<<v;
                cout<<endl;     
           }
           cout<<endl;
       }
       void add_edge(int origin, int destination){
           for(int i=0; i<list[origin].size(); i++){
             if(list[origin][i] == destination){
               cout<<"edge already exisits!"<<endl;
               return;
             }
           }
           list[origin].push_back(destination);
           list[destination].push_back(origin);
       }
       void delete_edge(int origin, int destination){
           for(int i=0; i<list[origin].size(); i++){
             if(list[origin][i] == destination){
               list[origin].erase(list[origin].begin()+i);
               break;
             }
           }
           for(int j=0; j<list[destination].size(); j++){
             if(list[destination][j] == origin){
               list[destination].erase(list[destination].begin()+j);
               break;
             }
           }
       }
 };
 void ask(AdjacencyList lst);
int main(){
    int nodes;
     cout<<"Enter number of nodes: ";
     cin>>nodes;
     AdjacencyList adm(nodes);
   while(true){
    ask(adm);
   }
    return 0;
}


void ask(AdjacencyList lst){
  int choice;  
  cout<<"1. Display List"<<endl;
  cout<<"2. Add edge"<<endl;  
  cout<<"3. delete edge"<<endl;
  cout<<"4. Quit"<<endl;
  cout<<"Enter your choice: ";
  cin>>choice;
      switch(choice){
          case 1:
           lst.displayList();
        //    ask();
           break;
          case 2:
            int og, dest;
            cout<<"Enter origin: ";
            cin>>og;
            cout<<"Enter destination: ";
            cin>>dest;
            lst.add_edge(og, dest); 
            break;
          case 3: 
            int og2, dest2;
            cout<<"Enter origin: ";
            cin>>og2;
            cout<<"Enter destination: ";
            cin>>dest2;
            lst.delete_edge(og2, dest2); 
            break;
          case 4:
          exit(-1);
          default:
           cout<<"invalid choice"<<endl;
           ask(lst);  
      }
}