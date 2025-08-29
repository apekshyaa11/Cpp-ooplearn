#include<iostream>
#include<string>
using namespace std;
class Person{
    private:
    string name;
    int age;
    public:
    void setdata(string n, int a){
        name=n;
        age=a;
    }
    void displayInfo(){
        cout<<"Name is: "<<name<<endl;
        cout<<"Age is: "<<age<<endl;
    }
};
int main(){
    Person P;
    P.setdata("Luna",18);
    P.displayInfo();
    return 0;
}
