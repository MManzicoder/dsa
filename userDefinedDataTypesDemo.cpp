#include <iostream>
using namespace std;
enum Gender{ MALE, FEMALE, OTHER };
struct Person{
  string names;
  Gender gender;
};
Gender stringToEnum(string gender){
 return   gender == "MALE" ? MALE : FEMALE;
}
string enumToString(Gender gender){
 return   gender == MALE ? "MALE" : "FEMALE";
}
int main(){
    Person p1;
    string gender = "";
    cout << "Enter your names: ";
    cin >> p1.names;
    cout << "Enter your gender: ";
    cin >> gender;
    p1.gender = stringToEnum(gender);
     cout << "Person names: " << p1.names << " , Gender: " << enumToString(p1.gender);
}


