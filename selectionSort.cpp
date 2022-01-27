#include <iostream>
using namespace std;
void sortArray(int [], int);

int main(){
   int array[] = {9, 2, 7, 0, 4, 6, 45, 11};
   int n = sizeof(array)/sizeof(array[0]);
   cout<<"Unsorted Array: ";
      for(int el: array){
       cout<<el<<" ";
   }
   sortArray(array, n);
//    int *sortedArray;
//    sortedArray = sortArray(array);
//    for(int num: &sortedArray){
//        cout<<num<<" ";
//    }
//    int n = sizeof(array)/sizeof(array[0]);
//    for(int i=0; i<n-1; i++){
//        int min_index = i;
//        for(int j=i+1; j<n; j++){
//            if(array[j]<array[min_index]){
//                min_index = j;
//            }
//        }
//        if(i != min_index){
//            int temp = array[i];
//            array[i] = array[min_index];
//            array[min_index] = temp;
//        }
//      for(int el: array){
//        cout<<el<<" ";
//    }
//    cout<<"\n";    
//    }
//    cout<<"\n\nSorted Array:   ";
//    for(int el: array){
//        cout<<el<<" ";
//    }
   return 0;
}
int void sortArray(int arr[], int n){

        for(int i=0; i<n-1; i++){
       int min_index = i;
       for(int j=i+1; j<n; j++){
           if(arr[j]<arr[min_index]){
               min_index = j;
           }
       }
       if(i != min_index){
           int temp = arr[i];
           arr[i] = arr[min_index];
           arr[min_index] = temp;
       }
   }
   for(int num: arr){
       cout<<num<<" ";
   }
}