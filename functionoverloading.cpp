#include<iostream>
using namespace std;
int add(int a, int b){
    return a+b;
}

float add(float a, float b){
    return a+b;
}


int areaOfcircle(int r){
    return  3.14*r*r;
}

float areaOfSquare(float a){
    return a*a;
}
double areaOfPerimeter(double l, double b){
    return l * b;
}
int main(){
    cout<<"the sum of 4 and 6 is: "<<add(4, 6)<<endl;
    cout<<"the sum of 2.3 and 1.4 is: "<<add(2.3f, 1.4f)<<endl;
    cout<<"the area of circle is: "<<areaOfcircle(5)<<endl;
    cout<<"the area of square is: "<<areaOfSquare(5.3)<<endl;
    cout<<"the area of perimeter is: "<<areaOfPerimeter(12.3, 13.56)<<endl;
    return 0;
}



// #include<iostream>
// using namespace std;
// class print{
// public:
//     void putdata(int a){
//         cout<<"Integer: "<<a<<endl;
//     }
//     void show(float b){
//         cout<<"float: "<<b<<endl;
//     }
//     void show(string c){
//         cout<<"string: " <<c<<endl;
//     }
// };
// int main(){
//     print p;
//     p.putdata(2);
//     p.show(1.2);
//     p.show("hello");
//     return 0;
// }