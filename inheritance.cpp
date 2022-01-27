#include <iostream>
using namespace std;
class A{
    public:
      int x;
      int y;
    public:
         A(){
             cout<<"A called!"<<endl;
         }
         void setX(int a){
             x =a;
         }
         int getX(){
             return x;
         }
};

class B: public A{
    public:
        void setX(int a){
             x =a;
         }
         int getX(){
             return x;
         }

};
class C: public A{
    public:
        C(){
         cout<<"C is called!"<<endl;
        }
        void setX(int a){
             x =a;
         }
         int getX(){
             return x;
         }
};
class D: public B, public C{
    public:
        D(int a, int b){
            B::x = a;
            C::y = b;
         cout<<"D is called!"<<endl;

        }
};
//USING virtual we use the same memory
// class A{
//     public:
//       int x;
//       int y;
//     public:
//          A(){
//              cout<<"A called!"<<endl;
//          }
//          void setX(int a){
//              x =a;
//          }
//          int getX(){
//              return x;
//          }
// };

// class B: protected A{
//     public:
//         void setX(int a){
//              x =a;
//          }
//          int getX(){
//              return x;
//          }

// };
// class C: public A{
//     public:
//         C(){
//          cout<<"C is called!"<<endl;
//         }
//         void setX(int a){
//             //  x =a;
//          }
//          int getX(){
//              return x;
//          }
// };
// class D: public B, public C{
//     public:
//         D(int a, int b){
//             B::x = a;
//             C::y = b;
//          cout<<"D is called!"<<endl;

//         }
// };

int main(){
  D d(45, 30);
  d.B::setX(35);
  d.C::setX(50);
  cout<<"Bx value is :"<<d.B::getX()<<endl;
  cout<<"Cx value is :"<<d.C::getX()<<endl;
//   cout<<"Ax value is :"<<d.A::getX()<<endl;
    return 0;
}
