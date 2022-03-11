#include <iostream>
using namespace std;
int checkOccurence(int digit, int num){
    int count = 0;
        while(num > 0){
           if(digit == num %10)
               count++;
            num = num/10;   
        }
    return count;    
}
int getMostOccurenceDigit(int n){
     int mostOccuring = -1;
     int maxCount = -1;
     int tempN = n;
     int current = 0;
     int digit;
     while(n > 0){
        digit = n %10;
        current = checkOccurence(digit, tempN);
        cout<<"count for "<<digit<<": "<<current<<endl;
        if(current > maxCount && digit != mostOccuring){
            mostOccuring = digit;
            maxCount = current;
        }else if(maxCount == current){
            mostOccuring = maxCount = -1;
        }
        n = n/10;
     }

    return mostOccuring; 
}
int main(){
    while(true){
     int num;
     cout<<"Enter number: ";
     cin>>num;
     int mostOccuring = getMostOccurenceDigit(num);
     if(mostOccuring !=-1) cout<<"Most occuring digit in "<<num<<" is "<<mostOccuring<<endl;
     else cout<<"Found no most occuring digit"<<endl;
    }
    return 0;
}