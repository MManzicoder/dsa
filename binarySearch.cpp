#include <iostream>
using namespace std;

int binarySearch(int *arr, int n, int key){
	int start,end;
   if(arr == NULL) return -1;
	start= 0;
	end=n-1;
	
	while(start<=end) {
		int mid=(start+end)/2;
		if(key==arr[mid]){
			return mid;
		}else if(arr[mid]>key){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
   return -1;
}

int main(){
static int arr[5] = {10, 20, 40, 70, 90};
int n = sizeof(arr)/sizeof(arr[0]);
int ind = binarySearch(arr, n, 10);
if(ind == -1) cout<< "Element is not in the array";
else cout<<"Element found at index "<<ind;
return 0;
}