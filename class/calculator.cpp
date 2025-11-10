#include <iostream>
using namespace std;
class simpleCalculator
{
protected:
    int a1, b1;

public:
    void setdata1(int x, int y)
    {
        a1 = x;
        b1= y;
    }

    void display1()
    {
        cout << "addition: " << a1 + b1 << endl;
        cout << "subtraction: " << a1 - b1 << endl;
        cout << "multiplicatin: " << a1 * b1 << endl;
        cout << "division: " << a1 / b1 << endl;
    }
};

class scientificCalculator
{
protected:
    int a, b;

public:
    void setdata2(int x, int y)
    {
        a = x;
        b = y;
    }

    void display2()
    {
        cout << "addition: " << a + b << endl;
        cout << "subtraction: " << a - b << endl;
        cout << "multiplicatin: " << a * b << endl;
        cout << "division: " << a / b << endl;
    }
};

class hybrid : public simpleCalculator, public scientificCalculator{
    public:
    void show(){
        cout<<" hybrid calculator "<<endl;
        display1();
        display2();
        
    }
};
int main()
{
    hybrid h;
    h.setdata1(5,6);
    h.setdata2(6,8);
    h.show();
    return 0;
}