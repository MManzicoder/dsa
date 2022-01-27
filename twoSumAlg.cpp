#include <iostream>
using namespace std;

void twoSumArrayAlg(int * arr, int n, int sum){
    int num1, num2 = 0;
    int x = 0;
   for(int i=0; i<n; i++){
       int comp = sum-arr[x];
       for(int j=x+1; j<n; j++){
           if(comp == arr[j]){
                num1 = arr[x];
                num2 = arr[j];
           }
       }
       x++;
   }

   if(num1 == 0) cout<<"Numbers are not found!";
   else
   cout<<"First Number: "<<num1<<"\n"<<"Second Number: "<<num2;
}

int main(){
    int sum = 23;
    int arr[5] = {10, 5, 7, 8, 13};
    twoSumArrayAlg(arr, 5, sum);
    return 0;
}
