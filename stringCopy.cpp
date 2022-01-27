#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
     string textToCopy ="", copiedText;

    cout << "Enter text to copy : ";
    cin >> textToCopy;
    // strcpy(copiedText, textToCopy);
    // cout << "Copied Text: " << copiedText;
    // cout << "Original string: " <<textToCopy;
   textToCopy.replace(0,4, "Nice");
   cout << textToCopy;
    return 0;
}