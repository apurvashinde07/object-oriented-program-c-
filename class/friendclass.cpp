#include<iostream>
using namespace std;
class complex;

class calculater{
    public:
    int add(int a, int b){
        return a+b;
    }
    int sumrealcomplex(complex o1, complex o2);   
};
class complex{
        int a, b;
        public:
        int setdata(int x, int y){
            x = a;
            y = b;
        }
        int printdata(){
            return a + b;
        }
        friend class calculater;
};        
    int calculater :: sumrealcomplex(complex o1, complex o2){
        return (o1.a + o2.a);
    }
int main(){
    complex o1, o2;
    o1.setdata(2, 4);
    o2.setdata(4, 3);
    calculater cal;
    int result = cal.sumrealcomplex(o1, o2);
    cout<<"the sum of real part of complex number is: "<<result;
    return 0;
}