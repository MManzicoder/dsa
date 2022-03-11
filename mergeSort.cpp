#include <iostream>
using namespace std;

void merge(int arr[], int begin, int mid, int end){
    int sizeOfLeftArr = mid-begin+1;
    int sizeOfRightArr = end-mid;
    int leftIndexCount = 0;
    int rightIndexCount = 0;
    int mergedIndexCount = begin;
    int leftArr[sizeOfLeftArr];
    int rightArr[sizeOfRightArr];
    for(int i=0; i<sizeOfLeftArr; i++)
           leftArr[i] = arr[begin+i];
    for(int j=0; j<sizeOfLeftArr; j++)
           rightArr[j] = arr[mid+j+1];           

    //merge when both sub arrays have elements
    while(leftIndexCount < sizeOfLeftArr && rightIndexCount < sizeOfRightArr){
        if(leftArr[leftIndexCount] <= rightArr[rightIndexCount]){
            arr[mergedIndexCount] = leftArr[leftIndexCount];
            leftIndexCount++;
        }else{
            arr[mergedIndexCount] = rightArr[rightIndexCount];
            rightIndexCount++;
        }
        mergedIndexCount++;
    }       
    while(leftIndexCount < sizeOfLeftArr){
        arr[mergedIndexCount] = leftArr[leftIndexCount];
        leftIndexCount++;
        mergedIndexCount++;
    }
    while(rightIndexCount < sizeOfRightArr){
        arr[mergedIndexCount] = rightArr[rightIndexCount];
        rightIndexCount++;
        mergedIndexCount++;
    }
}
void mergeSort(int arr[], int begin, int end){
    if(begin >= end)
        return;
    int mid = (begin+end)/2;
    cout<<"Begin: "<<begin<<" End: "<<end<<endl;
    mergeSort(arr, begin, mid);    
    cout<<"Begin1: "<<begin<<" End1: "<<end<<endl;
    mergeSort(arr, mid+1, end);   
    cout<<"MERGING ..."<<endl; 
    merge(arr, begin, mid, end);
}
void print(int arr[], int n){
    for(int i=0; i< n; i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int arr[] = {10,11,9,8,15,2};
    cout<<"unsorted array"<<endl;
    print(arr, 6);
    cout<<endl;
    mergeSort(arr, 0, 5);
    cout<<"sorted array"<<endl;
    print(arr, 6);
    cout<<endl;
    return 0;
}