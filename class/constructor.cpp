#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    //Creating constructor
    //constructor is a special member function  with thw same name as class 
    //used to initialize the object of its class
    //it automatically called when object is created
    //do nat have return type 
    //they are declare  in public saction

    //declaration 
    complex(void);
    int printdata(){
        cout<<"the sum is: "<<a<<"+"<<b<<"i"<<endl;
    }
};

// defination of construcor

//default constructor with no any parameter
complex::complex(){
    a = 2;
    b = 4;
    cout<<"construcor called"<<endl;

}
int main(){
    complex c, c1;
    c.printdata();
    c1.printdata();
    

    
    return 0;
}