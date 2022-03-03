#include <iostream>

using namespace std;

int interpolationSearch(int *arr, int n, int x){
	int lo,hi;
	lo=0;
    hi=n-1;
	
	while(lo<=hi) {
//		int pos=(start+end)/2;
 int pos = lo + (x-arr[lo])*(hi-lo) / (arr[hi]-arr[lo]);
		if(x==arr[pos]){
			return pos;
		}else if(arr[pos]>x){
			hi=pos-1;
		}else{
			lo=pos+1;
		}
	}
	return -1;
}

int main(){
	int arr[7]={1,2,3,4,5,6,7};
	cout<< interpolationSearch(arr,7,5)<<endl;
	
	return 0;
}