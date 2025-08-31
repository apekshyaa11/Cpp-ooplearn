#include<iostream>
#include<string>
using namespace std;
int main(){
    int age;
    string name;
    cout<<"Enter your name";
    getline(cin,name);
    cout<<"Enter your age";
    cin>>age;
    cout<<"My name is "<<name<<", My age is "<<age<<endl;
    return 0;
}


//getline() helps us to write full name of the thing, person etc. 
// when we use cin it only take one word upto space eg for Apekshya Sapkota it will only show Apekshya but getline() shows full words
