#include<iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;

    cout<<"Enter your name: ";
    getline(cin,name);
    cout<<"Enter your age: ";
    cin>>age;
    cout<<"Hi "<<name<<"! Your will turn "<<(age+1)<<" next year.\n";
}