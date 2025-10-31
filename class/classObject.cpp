#include<iostream>
using namespace std;
class item{
     int a, b;
    public:
    int setdata(int x,int y){
        a = x;
        b = y;
    }

    int getdata(){
        cout<<"the value of a is: "<<a<<endl;
        cout<<"the value of a is: "<<b<<endl;

        return (a + b);
    }

    
};
int main(){
    item i1, i2;
    i1.setdata(3, 4);
    cout<<"sum: "<<i1.getdata()<<endl;

    i2.setdata(1, 7);
    cout<<"sum: "<<i2.getdata()<<endl;
    
    return 0;
}