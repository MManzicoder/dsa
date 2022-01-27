#include <iostream>
using namespace std;
int evenOddSumArray(int * arr, int n){
    int evenSum =0;
    int oddSum = 0;
    if(n == 0) return 0;
    else
       for(int i=0; i<n; i++)
            if(arr[i] % 2 == 0) 
               evenSum = evenSum + arr[i];
            else 
              oddSum = oddSum + arr[i];
       int res = oddSum - evenSum;
       return res;       

}
int main(){
    int arr[]  = {1,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    int sum = evenOddSumArray(arr, n);
  cout<<"Sum of the array and odd elements (oddSum - evenSum) = "<<sum<<endl;
}