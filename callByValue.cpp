#include <iostream>
using namespace std;

void swap(int x, int y) {
    int temp = x;
    x = y;
    y = temp;
    cout << "Inside function (after swap): x = " << x << ", y = " << y << endl;
}

int main() {
    int a = 10, b = 20;
    swap(a, b);  //call by value
    cout << "Inside main (after function): a = " << a << ", b = " << b << endl;
    return 0;
}
