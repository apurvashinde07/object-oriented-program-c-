 #include <iostream>
 using namespace std;

 int factorial(int n) {
     if (n == 0 || n == 1)    // base case
         return 1;
     else
         return n * factorial(n - 1);  // recursive call
 }

 int main() {
     int num = 5;
     cout << "Factorial of " << num << " = " << factorial(num);
     return 0;
 }


#include <iostream>
using namespace std;

int fibonacci(int n) {
    if (n == 0) return 0;       // base case
    if (n == 1) return 1;       // base case
    return fibonacci(n - 1) + fibonacci(n - 2);   // recursive call
}

int main() {
    int terms = 6;
    cout << "Fibonacci Series: ";
    for (int i = 0; i < terms; i++)
        cout << fibonacci(i) << " ";
    return 0;
}

