//Write a program to create a class (e.g., Book, Car) with data members and member functions.
//Create multiple objects and demonstrate their use.
#include<iostream>
#include<string>
using namespace std;
class Car{
    private:
    int price;
    string model;
    string color;
    double cubiccentimeter;
    public:
    void setdata(int p, string m, string c, double cc)
    {
        price=p;
        model=m;
        color=c;
        cubiccentimeter=cc;
    }
    void getdata(){
        cout<<"Price is: "<<price<<endl;
        cout<<"Model is: "<<model<<endl;
        cout<<"Color is: "<<color<<endl;
        cout<<"cubiccentimeter is: "<<cubiccentimeter<<endl;

    }
};
class Book{
    private:
    int price;
    string name;
    string author;
    public:
    void setdata(int p, string n, string a){
        price=p;
        name=n;
        author=a;
    }
    void getdata(){
        cout<<"Price is: "<<price<<endl;
        cout<<"Name is: "<<name<<endl;
        cout<<"Author is: "<<author<<endl;
    }
};
    int main(){
        Car TATA;
        TATA.setdata(456789, "Nexon", "Red",350);
        TATA.getdata();
        Book ItsEndwithUs;
        ItsEndwithUs.setdata(560,"ItsEndWithUs", "Colleen Hoover");
        ItsEndwithUs.getdata();
        return 0;
    }//Done by Apekshya