#include <iostream>
using namespace std;
bool isPrime(int n){
    if(n <=1) return false;
    for(int j=2; j<=n/2; j++){
        if(n % j == 0) return false;
    }
    return true;
}
int isPrimeProduct(int n){
  if(isPrime(n)) return 0;
  int c = n;//last index
  int i=0;
  while(i<c){
      if(isPrime(i) && isPrime(c)){
          if((i * c) == n || (i*i) == n){
              return 1;
          }
      }
      if((i*c) < n){
          //shift to the right
          i++;
      }
      else c--;//shift to the left
  }
  return 0;  
}
int main(){
  int pnum = 0;
  cout<<"Enter number: ";
  cin>>pnum;

  int isP = isPrimeProduct(pnum);
  if(isP == 1) cout<<"Prime product";
  else cout <<"Not prime product";
  return 0;
}