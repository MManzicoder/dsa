#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter nber of array elements: ";
    cin >> n;
    int numbers[n];
    for(int i =0; i < n; i++ ){
        cout << " Enter element "<< i <<": ";
        cin >> numbers[i];
    } 

    for (int c =0; c<n; c++){
        cout << "number " << c+1 << ": " << c[numbers] << ", Memory adress at index " << c << "is " << &numbers[c] << "\n";
    }

}