#include <iostream>
using namespace std;
int * getCommonArray(int* arr1, int* arr2, int n1, int n2){
    int * common = new int[];
    int len = 0;
    if(n1 >= n2){
     len = n1;
    }else{
      len = n2;
    }
    int x =0;
    for(int i=0; i<len; i++){
        for (int j=0; j<len; j++){
         if(arr1[i] == arr2[j]){
            common[x] = arr1[i];
        }
        }
        x++;
    }
    for(int d=0; d<x; d++){
        cout<<&common[d]<<" ";
    }
    return common;
}
int main(){
    int * common;
    int a1[] ={2,7,8, 10, 3};
    int a2[] ={2,1, 10, 8};
    common = getCommonArray(a1, a2, 5, 4);
    static int ln = sizeof(common)/sizeof(&common[0]);
    for(int i = 0; i<ln; i++){
        cout<<&common[ln]<<" ";
    }
    return 0;
}