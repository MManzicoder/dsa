#include <iostream>

using namespace std;
int main(){

       int array[] = {8,7,6,5,4,2,0};
       int n = sizeof(array)/sizeof(array[0]);
       for(int i=1; i<n; i++){
           int temp;
         for(int j=0; j<n-i; j++){
               if(array[j]>array[j+1]){
               temp = array[j];
               array[j] = array[j+1];
               array[j+1] = temp;
           }
         }

       }
       for(int el: array){
           cout<<el<<" ";
       }
}