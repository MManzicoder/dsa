#include <iostream>
using namespace std;
int add(int, int);
int main(){
    int a =10, b =15, sum=0;
    // cout << "The sum of " << a << " and " <<b <<" is "<<sum;
    // sum = a +b;
    // cout << sum <<endl;
    cout << "Enter first number:";
    cin >> a;
    cout << "Enter second number :";
    cin >> b;
    sum = add(a, b);
    cout << "The sum of " << a << " and " << b <<" is " << sum <<endl;
    return 0;
 }

int add(int a, int b){
    return a+b;
}