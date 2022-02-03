#include <iostream>
using namespace std;

bool isPrime(int n){
    if(n <=1) return false;
    for(int j=2; j<=n/2; j++){
        if(n % j == 0) return false;
    }
    return true;
}
int isMagicArray(int *arr, int n){
   if(n<=0) return 0;
   int i=0, sumPrime = 0;
   for(i=0; i<n; i++){
       if(isPrime(arr[i])){
           sumPrime += arr[i];
       }
   }
   if(sumPrime == arr[0]){
       return 1;
   }
   return 0;
}

int main(){
    int arr[] = {21, 3, 7, 9, 11, 4, 6};
    int n = sizeof(arr)/sizeof(arr[0]);
    int magic = isMagicArray(arr, n);
    if(magic == 1) cout<<"The array is magic array";
    else cout<<"The array is not magic";
    return 0;
}