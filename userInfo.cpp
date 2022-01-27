#include <iostream>
using namespace std;
enum Gender{ MALE, FEMALE, OTHER };
struct Student{
  string firstName;
  string lastName;
  Gender gender;
  string course;
};
Gender stringToEnum(string gender){
 return   gender == "MALE" ? MALE : FEMALE;
}
string enumToString(Gender gender){
 return   gender == MALE ? "MALE" : "FEMALE";
}
int main(){

    int n;
    string gender;
    cout << "Enter number of persons that you want to record: ";
    cin >> n;
   Student students[n];

    for(int i=0; i<n; i++){
        cout << "Enter firstName of the  student " << i+1 << ": ";
        cin >> students[i].firstName;
        cout << "Enter lastName of the student " <<i+1 <<": ";
        cin >> students[i].lastName;
        cout << "Enter the course of the student " <<i+1 <<": ";
        cin >> students[i].course;
        cout << "Enter student " <<i+1 <<" gender: ";
        cin >> gender;
        students[i].gender = stringToEnum(gender);  
    }
       for(int j=0; j<n; j++){
        cout << "Person names: " << students[j].firstName << " " << students[j].lastName << " , Gender: " << enumToString(students[j].gender) << " Course: " << students[j].course << "\n";
    }
 

}


