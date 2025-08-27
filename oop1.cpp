//oop start
#include<iostream>
#include<string>
using namespace std;
class Student
{
    private:
    int age;
    string name;
    int rollno;
    char grade;
    double fee;
    public:
    void setdata( int a, string n, int r, char g, double f){
        age=a;
        name=n;
        rollno=r;
        grade=g;
        fee=f;
}
    void getdata()
    {
        cout<<"Name is: "<<name<<endl;
        cout<< "Age is: "<<age<<endl;
        cout<<"Roll no is: "<<rollno<<endl;
        cout<<"Grade is: "<<grade<<endl;
        cout<<"Fee is: "<<fee<<endl;
    }
};
int main()
{
Student s1;
s1.setdata(18, "Apekshya", 3, 'A', 1234.3);
s1.getdata();
Student s2;
s2.setdata(19, "Anya", 4, 'A', 4243535.4);
s2.getdata();
return 0;
}