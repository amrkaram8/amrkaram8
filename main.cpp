#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
 string full_name;
 int id;
 int grade;
 cout << "enter your full name"<< endl;
 getline(cin,full_name);
 cout << "enter your id"<<endl;
 cin>>id;
 cout << "enter your grade"<<endl;
 cin >> grade;

 ofstream student ;
 student.open("student.txt");

student<<"full name " <<full_name <<endl;
student<<"id "<<id<<endl;
student<< "grade "<< grade<<endl;
student.close();


}







