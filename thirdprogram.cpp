// #include<iostream>
// using namespace std;
// int main(){
//     int a,i,mul;
//     cout<<"Multiplication Table of 5"<<endl;
//     cout<<"Enter a number"<<endl;
//     cin>>a;
//     for(i=1; i<=10;i++){
//         mul=a*i;
//         cout<<"Multiplication:"<<a<<"*"<<i<<"="<<mul<<endl;
//         }
// return 0;        
// }
#include<iostream>
using namespace std;
int main(){
    int a, mul;
    cout<<"Enter a number: ";
    cin>>a;
    for(int i=1; i<=10; i++){
        mul=a*i;
        cout<<a<<"*"<<i<<"="<<mul<<endl;

    }
    return 0;

}