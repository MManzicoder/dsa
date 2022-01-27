#include <iostream>
using namespace std;
int getSum(int num){
    int sum =0;
    if(num>=0){
        for(int i=0; i<num; i++){
            if((i%3 == 0) && (i%5 == 0)){
              sum+=i;
            }
        }
    }
    return sum;
}
int main(){
     int num;
     cout<<"Enter num: ";
     cin>>num;
     int sum = getSum(num);
     cout<<"The sum of numbers less than "<<num<<" which are multiples of 3 and 5 is "<<sum<<endl;
    return 0;
}