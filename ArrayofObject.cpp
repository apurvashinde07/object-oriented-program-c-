#include<iostream>
using namespace std;
class employee{
    private:
    int id;
    int salary;
    public:
    void setid(void){
        salary =122;
        cout<<"enter the Id of employee: ";
        cin>>id;
    }

    void getid(void){
        cout<<"The id of employee is: "<<id<<endl;

    }

}  ;


int main(){
     employee e1, e2, e3;
     e1.setid();
     e1.getid();
     return 0;
}

