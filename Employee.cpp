#include<iostream>
using namespace std;
class Employee{
private:
char name[20],designation[20];
int salary,net;
int emp_id,it,da;

public:

void getData(){
    cout<<"****EMPLOYEE DETAIL****"<<endl;
    cout<<"Enter employee name : ";
    cin>>name;
    cout<<"Enter employee designation : ";
    cin>>designation;
    cout<<"Enter employee id : ";
    cin>>emp_id;
    cout<<"Enter employee salary : ";
    cin>>salary;
}
void netSalary(){
    cout<<"Enter employee da : ";
    cin>>da;
    cout<<"Enter employee it : ";
    cin>>it;

    net = (salary + da - it);
}
void showData(){
    cout<<"\n****SHOWING EMPLOYEE DETAIL****";
    cout<<"\nEmployee name is : "<<name;
    cout<<"\nEmployee designation is : "<<designation;
    cout<<"\nEmployee id is : "<<emp_id;
    cout<<"\nEmployee salary is : "<<net; 
}
};
int main(){
Employee E;
E.getData();
E.netSalary();
E.showData();
return 0;
}
