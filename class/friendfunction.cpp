/* properties of friend function:
1. Not in the scope of class.
2. it cannot be  called  from the object of that class. 
   c3.sunOfcomplex() invalid 
3. can be called without the help of any onject.
4. usually contains the object as arguments.
5. can be declared inside private or public part of the class
   */


#include<iostream>
using namespace std;
class complex{
    int a, b;
    public:
    void setnumber(int n1, int n2){
        a=n1;
        b=n2;
    }
    void printnumber(){
        cout<<"The complex number is: "<<a<<" + "<<b<<"i"<<endl;
    }

    // friend function 
    friend complex sumOfComplex(complex o1, complex o2);
    

};

complex sumOfComplex(complex o1, complex o2){
    complex o3;
    o3.setnumber((o1.a+o2.a), (o1.b+o2.b));
    return o3;
}
int main(){
    complex c1, c2, sum;
    c1.setnumber(2, 4);
    c2.setnumber(1, 3);

    c1.printnumber();
    c2.printnumber();

    sum= sumOfComplex(c1, c2);
    sum.printnumber();
    return 0;
}