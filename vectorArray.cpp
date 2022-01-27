#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> numArray{11, 15, 19};
    // int numArray[4] = {12, 13, 75, 19};
    //using forEach loop
    // for(auto i: numArray){
    //     cout <<i<<endl;
    // }
    //using normal indexing
    for(int i=0; i<numArray.size(); i++){
        cout<<numArray.at(i)<<endl;
    }
    //iterating through vector without changing
    for(auto i = numArray.cbegin(); i !=numArray.cend(); i++){
        numArray.push_back(15);
    }
    return 0;
}