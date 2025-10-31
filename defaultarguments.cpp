//default  arguments 
#include<iostream>
using namespace std;
float area(int r, float x=3.14){
    return (r*r)*x;
}
int main(){
    int a, b;
    cout<<"area of the circle: "<<area(a=2 , b);
    return 0;
}

#include <iostream>
using namespace std;

void display(string name, string city = "Pune") {
    cout << "Name: " << name << ", City: " << city << endl;
}

int main() {
    display("Apurva");            // uses default city = "Pune"
    display("Rohan", "Mumbai");   // overrides default
    return 0;
}

#include <iostream>
using namespace std;

// Function declaration with default argument
void greet(string name = "Guest");

int main() {
    greet();            // uses default
    greet("Apurva");    // overrides default
    return 0;
}

// Function definition (no default value here)
void greet(string name) {
    cout << "Hello, " << name << "!" << endl;
}


#include <iostream>
using namespace std;

void sum(int a = 5, int b = 10, int c = 15) {
    cout << "Sum = " << a + b + c << endl;
}

int main() {
    sum();          // uses all default values
    sum(2);         // replaces a = 2, others default
    sum(2, 4);      // replaces a=2, b=4, c default
    sum(2, 4, 6);   // all replaced
    return 0;
}
