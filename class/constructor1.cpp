#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    complex(int, int);

    void printdata(){
        cout<<" Number is: "<<a<<"+"<<b<<"i"<<endl;
    }

};
// parameterized constructor
complex::complex(int x, int y){
    a = x;
    b = y;
    cout<<"constructor is called"<<endl;
}
int main(){
    //Implicit call
    complex c1(2, 5);

    //explicit call
    complex c2 = complex(4, 7);

    c1.printdata();
    c2.printdata();

    return 0;
}