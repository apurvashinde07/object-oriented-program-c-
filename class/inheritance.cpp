#include <iostream>
using namespace std;
// base class
class employee
{
public:
    int id;
    float salary;

    employee(int i, float s)
    {
        id = i;
        salary = s + 500;
        cout << "empoyee id: " << id << endl;
        cout << "employee salary: " << salary << endl;
    }

    employee() {}
};
//default visibility mode id peivate
// public visibility mode: public member of base class becomes public members of derived class
// private visibility mode: public members of base class becomes private member of derived class

class programmer : private  employee
{
public:
    programmer(int inpid)
    {
        id = inpid;
    }

    int getdata(){
        cout<<id<<endl;
    }
};
int main()
{
    employee e1(67, 10000), e2(45, 20000);

    programmer p1(4);
    // p1.id; // not accessible because privatly inherited
    p1.getdata();
    return 0;
}