#include<iostream>
using namespace std;
class number{
    int a;
    public:
    number(){
        a = 0;
    }
    number(int num){
        a = num;
    }

    //copy constructor
    //when there is no copy constructor is found . 
    //compiler supplies its own copy constructor 
    number(number &num){
        cout<<"copy constructor"<<endl;
        a = num.a;
    }

    int display(){
        cout<<"the number is: "<<a<<endl;
    }
};
int main(){
    number n1(3), n2, n4;
    n1.display();
    n2.display();
    number n3(n1);
    n3.display();
    n4 = n1; // copy constructor not called
    n4.display();
    return 0;
}