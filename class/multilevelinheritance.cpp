#include <iostream>
using namespace std;
//base class
class student
{
protected:
    int rollno;

public:
    void setrollno(int r)
    {
        rollno = r;
    }
    void getrollno(void)
    {
        cout << "roll number id: " << rollno<<endl;
    }
};

//derived class 1 from base class
class studentexam : public student
{
protected:
    float maths;
    float physics;

public:
    void setmarks(float m, float p)
    {
        maths = m;
        physics = p;
    }
    void getmarks()
    {
        cout << " marks of maths are: " << maths << endl;
        cout << " marks of physics are: " << physics << endl;
    }
};

//derived class 2 form derived class 1
class result : public studentexam
{
    float percentage;

public:
    void display()
    {
        getrollno();
        getmarks();
        cout << "percentage is: " << (maths + physics) / 2 << endl;
    }
};
int main()
{
    result harry;
    harry.setrollno(60);
    harry.setmarks(89, 97);
    harry.display();
    return 0;
}