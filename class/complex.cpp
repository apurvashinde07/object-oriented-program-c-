#include<iostream>
using namespace std;
class complex{
    private:
    int a;
    int b;
    public:
    void setdata(int x, int y){
        a = x;
        b = y;
    }
    void setdatabysum(complex c1, complex c2){
        a = c1.a + c2.a;
        b = c1.b + c2.b;

    }
    void printnumber(){
        cout<<"your complex number is: "<<a<<"+"<<b<<"i"<<endl;
    }
};
int main(){
    complex c1, c2, c3;
    c1.setdata(2, 4);
    c1.printnumber();

    c2.setdata(3, 6);
    c2.printnumber();

    c3.setdatabysum(c1, c2);
    c3.printnumber();
    
    return 0;
}