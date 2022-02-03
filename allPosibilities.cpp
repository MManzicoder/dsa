#include <iostream>
using namespace std;
int allPosibilities(int *arr, int n){
    if(n == 0) return 0;
    for(int i=0; i<n; i++){
        int flag = 0;
        for(int j=0; j<n; j++){
            if(arr[j] == i) flag = 1;
        }
        if(flag == 0) return 0;
    }
    return 1;
}
int main(){
    int arr[] = { 2, 4, 1, 5,3};
    int n = sizeof(arr)/sizeof(arr[0]);
    int isAllPos = allPosibilities(arr, n);
    if(isAllPos == 0){
        cout<<"It is not allPosibility array"<<endl;
        return -1;
    }
    cout<< "It is allPosibility array"<<endl;
 return 0;
}