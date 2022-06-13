#include <iostream>
#include <vector>
using namespace std;
class AdjacencyMatrix{
    private:
       int nodes;
       int **matrix;
    public:
       AdjacencyMatrix(int nodes){
           this->nodes = nodes;
           matrix = new int *[nodes];
           for(int i=0; i<nodes; i++){
               matrix[i] = new int[nodes];
             for(int j=0; j<nodes; j++){
               matrix[i][j] = 0;
             }
           }
       }   
       void display(){
           for(int i=0; i<nodes; i++){
               for(int j=0; j<nodes; j++){
                   cout<<matrix[i][j]<<" ";
               }
               cout<<endl;
           }
       }
       void add_edge(int origin, int destination){
           if(origin < 0 || destination < 0 || origin >= nodes || destination >= nodes){
               cout<<"Invalid nodes positions\n";
               return;
           }
           matrix[origin][destination] = 1;
       }
    void delete_edge(int origin, int destination){
           if(origin < 0 || destination < 0 || origin >= nodes || destination >= nodes){
               cout<<"Invalid nodes positions\n";
               return;
           }
           matrix[origin][destination] = 0;
       }
       
       
};
void ask(AdjacencyMatrix adm);
int main(){
     int nodes;
     cout<<"Enter number of nodes: ";
     cin>>nodes;
     AdjacencyMatrix adm(nodes);
   while(true){
    ask(adm);
   }
 return 0;
}

void ask(AdjacencyMatrix adm){
  int choice;  
  cout<<"1. Display matrix"<<endl;
  cout<<"2. Add edge"<<endl;  
  cout<<"3. delete edge"<<endl;
  cout<<"4. Quit"<<endl;
  cout<<"Enter your choice: ";
  cin>>choice;
      switch(choice){
          case 1:
           adm.display();
        //    ask();
           break;
          case 2:
            int og, dest;
            cout<<"Enter origin position: ";
            cin>>og;
            cout<<"Enter destination position: ";
            cin>>dest;
            adm.add_edge(og, dest); 
            break;
          case 3: 
            int og2, dest2;
            cout<<"Enter origin position: ";
            cin>>og2;
            cout<<"Enter destination position: ";
            cin>>dest2;
            adm.delete_edge(og2, dest2); 
            break;
          case 4:
          exit(-1);
          default:
           cout<<"invalid choice"<<endl;
           ask(adm);  
      }
}