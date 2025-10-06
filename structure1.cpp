// ....structure...
#include<iostream>
#include<cstring>
using namespace std;
struct employee
{
    /* data */
    char name[50];
    int Id;
    float salary;
};

int main(){
    employee emp1;
    cout<<"enter the emp name: ";
    cin>>emp1.name; 
    cout<<"enter the emp Id: ";
    cin>>emp1.Id;
    cout<<"enter the emp salary: ";
    cin>>emp1.salary;
    cout<< "name of thr employee is: "<<emp1.name<<endl;
    cout<< "Id of the employee is: "<<emp1.Id<<endl;
    cout<< "salary of the employee is: "<<emp1.salary<<endl; 
return 0;
}

// 2
#include<iostream>
#include<cstring>
using namespace std;
struct employee
{
    /* data */
    int eId; 
    char favChar; 
    float salary; 
};

 int main() {
     struct employee harry;
     harry.eId = 1;
     harry.favChar = 'c';
     harry.salary = 120000000;
     cout<<"The value is "<<harry.eId<<endl; 
     cout<<"The value is "<<harry.favChar<<endl; 
     cout<<"The value is "<<harry.salary<<endl; 
     return 0;
}



