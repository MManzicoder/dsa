#include <iostream>
#include <cstring>
using namespace std;
char * getCharArray(char * chars, int start, int length){
    int n = strlen(chars);
    if(start < 0) return NULL;
    if(n == 0 || (start+length) > n || length > n || start > n) return NULL;
    char * res = new char[length];
    int x = 0;
    for(int i=start; i<(start+length); i++){
         res[x] = chars[i];
         x++;
    }
    for(int j=0; j<length; j++){
        cout<<res[j]<<" ";
    }
   return res;   
}
int main(){
  static  char arrChar[] = {'a', 'b', 'c','d','e'};
  char *res;
  res = getCharArray(arrChar, 0, 5);
  if(res == NULL) cout<<"null"<<endl;
 return 0;
}