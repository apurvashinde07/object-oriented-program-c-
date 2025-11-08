#include<iostream>
using namespace std;
//destructor never takes an arguments 
// does not return any value

class number{
    int a , b;
    public:
    number(){}
    number(int x){
        a = x;
        cout<<"constructor is called for "<<a<<endl;
    }
    ~number(){
        cout<<"destructor is called for "<<a<<endl;
    }
};
int main(){
    number n1(2);{
        number n2(1);
    } 
    return 0;
}