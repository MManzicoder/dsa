#include <iostream>
using namespace std;

int main(){
    int myArray[] = {5, 3, 1, 69, 54, 34};
    int n = sizeof(myArray)/sizeof(myArray[0]);
    int key, p;
    for(int i=1; i<n; i++){
        key=myArray[i];
        p =i-1;
        while (p>=0 && myArray[p] > key){
            myArray[p+1] = myArray[p];
            p--;
        }
        myArray[p+1] = key;
    }
   for(int i=0; i<n; i++){
       cout << myArray[i]<<endl;
   }
    return 0;
}