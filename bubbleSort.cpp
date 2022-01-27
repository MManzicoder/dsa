#include <iostream>
using namespace std;

int main(){
       int array[] = {4,2,0};
       int n = sizeof(array)/sizeof(array[0]);
      cout<<"unsorted array: \n";
    //    for(int el:  array){
    //        cout<<el<<" ";
    //    }
       for (int i = 1; i < n; i++)
       {
           for(int j=0; j<n-i; j++){
               if(array[j]>array[j+1]){
                   int temp = array[j+1];
                    array[j+1] = array[j];
                    array[j] = temp;
               }
       for(int el: array){
           cout<<el<<" ";
       }        
       cout<<"\n";
           }
       }
    // for(int i=0; i<n; i++){
    //     for(int j=i; j<n-1; j++){
    //         if(array[j+1]<array[i]){
    //             int temp = array[i];
    //             array[i] = array[j+1];
    //             array[j+1] = temp;
    //         }
    //     }
    //     for(int el: array){
    //        cout<<el<<" ";
    //    }
    //    cout<<"\n";
    // }
//  cout<<"\nsorted array: \n";
//        for(int el: array){
//            cout<<el<<" ";
//        }
    return 0;
}