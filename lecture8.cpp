#include<iostream>
#include<iomanip>
using namespace std;
int main(){
    int a = 34;
    cout<<"the value of a was:"<<a<<endl;
    a = 45;
    cout<<"the value of a is:"<<a;

    const int a = 34;
    cout<<"the value of a was:"<<a<<endl;
    a = 45;
    cout<<"the value of a is:"<<a;

//manipulators in c++
int a=3, b=34, c=1223;
cout<<"the value of a is:"<<a<<endl;
cout<<"the value of b is:"<<b<<endl;
cout<<"the value of c is:"<<c<<endl;

cout<<"the value of a is:" <<setw(4)<<a<<endl;
cout<<"the value of b is:" <<setw(4)<<b<<endl;
cout<<"the value of c is:" <<setw(4)<<c<<endl;

//operator precedence
int a = 3, b=4;
int c = ((((a*5)+b)-45)+57);
cout<<c;
return 0;
}