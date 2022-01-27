#include <iostream>
using namespace std;
int reverseNum(int num){
    int reversedNum = 0;
    if( num < 0){
        num = -num;
    }
    while (num > 0){
      reversedNum = reversedNum * 10 + num % 10;
      num = num/10;
   }
   if(num < 0){
       reversedNum = - reversedNum;
   }

   return reversedNum;
}
int main(){
  int num = -225;
  int rev = reverseNum(num);
  num > 0 ? cout<<rev : cout<<"-"<<rev;
    return 0;
}