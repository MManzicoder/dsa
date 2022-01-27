#include <iostream>
using namespace std;
int * insertionSort(int * nums[], int n){
    for(int i=1; i<n; i++){
        int current = *(nums+i);
        int j = i-1;
        while(j >=0 && *(nums+j) > current){
            *(nums+j+1) = *(nums + j);
        }
        *(nums+j+1) = current;
    }
    return nums;
}
int main(){
   int array [] = {12, 5, 9,3,7,2,0};
   int n = sizeof(array)/sizeof(array[0]);
   int *sortedArray;
   sortedArray = insertionSort(&array, n);
 cout<<"Sorted";
}