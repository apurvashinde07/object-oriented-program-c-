//Inline function
#include<iostream>
using namespace std;
inline int product(int x, int y){
    return x*y+2;
}
int main(){
    int a, b;
    cout<<"enter a and b: ";
    cin>>a>>b;
    cout<<"the product of a and b is: "<<product(a, b)<<endl;
    cout<<"the product of a and b is: "<<product(a, b)<<endl;
    cout<<"the product of a and b is: "<<product(a, b)<<endl;
    cout<<"the product of a and b is: "<<product(a, b);


    return 0;
}

#include <iostream>
using namespace std;

inline int square(int x) {
    return x * x;
}

int main() {
    cout << "Square of 5: " << square(5) << endl;
    cout << "Square of 7: " << square(7) << endl;
    return 0;
}


