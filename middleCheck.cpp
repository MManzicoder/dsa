#include <iostream>
using namespace std;

int isCenteredArray(int * arr, int n){
    if(n <3){
        return 0;
    }
    if(n%2 == 0) return 0;
    int midIndex = (n-1)/2;
    for(int i=0; i<midIndex; i++){
       if(arr[i] <= arr[midIndex] || arr[i+midIndex+1] <= arr[midIndex]) return 0;
       return 1;
    }
}

int main(){
    int arr[]  = {3, 2, 1, 4, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    int centered = isCenteredArray(arr, n);
    if(centered == 1) {
        cout<<"Centered array";
    }else{
        cout<<"Not centered";
    }
}