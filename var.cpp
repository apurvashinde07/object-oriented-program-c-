#include<iostream>
using namespace std;

// int c=50; // global variable

// int main(){
//     int a, b, c; //local variable
//     cout<<"enter the value of a:"<<endl;
//     cin>>a;
//     cout<<"enter the value of b:"<<endl;
//     cin>>b;
//     c=a + b;
//     cout<<"the sum is:"<<c<<endl;
//     cout<<"the global c is"<<::c; // :: scope ressolving opertor 
// }

// int main(){
//     float d=3.14f;
//     long double e=3.14L;
//     cout<<"the size of 3.14 is "<<sizeof(3.14)<<endl;
//     cout<<"the size of 3.14f is "<<sizeof(3.14f)<<endl;
//     cout<<"the size of 3.14F is "<<sizeof(3.14F)<<endl;
//     cout<<"the size of 3.14l is "<<sizeof(3.14l)<<endl;
//     cout<<"the size of 3.14L is "<<sizeof(3.14L)<<endl;
    

//     cout<<"the value of d is"<<d<<endl<<"the value of e is:"<<e;
//     return 0;
// }

// int main()
// {
//     float x=222;
//     float & y= x; // y is reference variable of x
//     cout<<x<<endl;
//     cout<<y<<endl;
//     return 0;
// }

    // typecasting 
int main(){
    int a=45;
    float b=45.45;

    cout<<"the value of a is "<<float(a)<<endl;
    cout<<"the value of b is "<<(float)a<<endl;

    cout<<"the value of b is "<<int(a)<<endl;
    cout<<"the value of b is "<<(int)a<<endl;

    cout<<a + b<<endl;
    cout<<a + int(b)<<endl;
    cout<<a + (int)b;

    }
