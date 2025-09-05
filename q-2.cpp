#include<iostream>
using namespace std;
class Employee{
    private:

    string name;
    int salary;
    string designation;

    public:
    void setemp(){
        cout<<"Enter The Employee Name:";
        cin>>name;
        cout<<"Enter The Employee Salary:";
        cin>>salary;
        cout<<"Enter The Employee Designation:";
        cin>>designation;
    }
    void getemp(){
        cout<<"-------------Employee Details-------------"<<endl;
        cout<<"Employee Name is:"<<name<<endl;
        cout<<"Employee Salary is:"<<salary<<endl;
        cout<<"Employee Designation is:"<<designation<<endl;
        cout<<"------------------------------------------"<<endl;
    }
};
int main()
{
    Employee emp;
    emp.setemp();
    emp.getemp();
    return 0;
}
