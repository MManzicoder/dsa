#include <iostream>
using namespace std;
class Encapsulation{
    private: int x;
    public: 
      int * exposeX(){
        return &x;
    }
    int getX(){ return x;}

};
int main(){
    // int a = 3, b = 5;
    // int *c;
    // c = &a;
    // *c = b;
    // cout<<"Value of a is "<<a<<endl;
    Encapsulation enc;
    int *y = enc.exposeX();
    *y = 10;
    cout<<" X value: "<<enc.getX()<<endl;
    return 0;
}