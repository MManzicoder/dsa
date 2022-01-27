#include <iostream>
using namespace std;

class Computer{
    private:
       int memory;
       string model;
    public:
     
    //    Computer(){  
    //        cout<<"Demo c++";
    //    }
       Computer(int memoryparam, string modelparam){
        memory = memoryparam;
        model = modelparam;
    }
       void setMemory(string modelparam){
            if(modelparam=="POSITIVO"){
                memory = 8;
            }else if(modelparam=="DELL"){
                memory = 16;
            }
        }
        int getMemory(){
            return memory;
        }    
        string getModel(){
            return model;
        }
};
int main(){
 Computer comp(8, "POSITIVO");
 comp.setMemory("POSITIVO"); 
cout<< "\n"<<comp.getMemory();
cout<< "\n"<<comp.getModel();
}
