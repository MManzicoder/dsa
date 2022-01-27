#include <iostream>
#include <vector>
using namespace std;

int main(){
     vector<int> numArray = {4, 6, 9};
    // int myArray[] = {3, 5, 9};
    // myArray[3] = 50;
    // for(int i: myArray){
    //     cout<<i<<endl;
    // }
    // for(auto i =numArray.rbegin(); i!=numArray.rend(); ++i){
    //     cout << *i <<endl;
    // }
    int myArr[]={2,45};
   myArr[2]=12;
   for(int i=0; i<3; i++){
       cout<<myArr[i]<<endl;
   }
    return 0;
}