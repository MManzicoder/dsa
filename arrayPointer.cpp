#include <iostream>
using namespace std;

int main(){
    int arrayNbers[3] = {3,6,9};
    int *pointerArray;
    pointerArray = arrayNbers;
    cout << "Value of pointer at index 0 is "<<*(pointerArray+1)<<endl;
    return 0;
}