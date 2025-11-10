#include<iostream>
using namespace std;
class base1{
    protected:
    int num1;
    public:
    void setnum1(int a){
        num1 = a;
    }
};

class base2{
    protected:
    int num2;
    public:
    void setnum2(int a){
        num2 = a;
    }
};

class derived : public base1 ,public base2{
    public:
    void show(){
        cout<<"value of base 1: "<<num1<<endl;
        cout<<"value of base 2: "<<num2<<endl;
        cout<<num1 + num2;
    }

};


int main(){
    derived d1;
    d1.setnum1(27);
    d1.setnum2(49);
    d1.show();
    return 0;
}