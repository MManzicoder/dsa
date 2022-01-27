#include <iostream>
using namespace std;
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}
int * sortArray(int numbers[], int length){
   for(int i=0; i<length; i++){
      for(int j=0; j<length-i-1; j++){
        if(numbers[j] > numbers[j+1]){
            swap(&numbers[j], &numbers[j+1]);
        }
      }
   }
   return numbers;
}
void printArray(int numbers[], int n){
    cout<<"Sorted array: \n";
    for(int i=0; i<n; i++){
        cout<<numbers[i]<<" ";
    }
}
int main(){
  int arr [4] = {12, 6, 9, 5};
  int length = sizeof(arr)/sizeof(arr[0]);
  int *sortedArray;
  sortedArray = sortArray(arr, length);
  printArray(sortedArray, length);
     
 return 0;
}

