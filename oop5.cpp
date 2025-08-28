//Write a C++ program to create a Rectangle class with data members length and width, and a member function to calculate area.
#include<iostream>                                                    
using namespace std;
class Rectangle{
    private:
    int length;
    int width;
    int area;
    public:
    void setdata( int l, int w){
        length=l;
        width=w;
    }
    void calculateArea(){
        area = length*width;
    }
    void getdata(){
        cout<<"Area is: "<<area<<endl;
    }
};
int main() {
    Rectangle rect;
    int l, w;

    cout << "Enter length: ";
    cin >> l;
    cout << "Enter width: ";
    cin >> w;

    rect.setdata(l, w);
    rect.calculateArea();
    rect.getdata();

    return 0;
}