#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    int rollno;
    double totalmarks,marks1,marks2,marks3;
    public:
    void calculatetotal()
    {
        totalmarks=(marks1+marks2+marks3);
    }
    void input()
    {
        cout<<"enter marks1:";
        cin>>marks1;
        cout<<"enter marks2:";
        cin>>marks2;
        cout<<"enter marks3:";
        cin>>marks3;
        cout<<"enter name:";
        cin>>name;
        cout<<"enter rollno:";
        cin>>rollno;
    }
    void display()
    {
        cout<<"totalmarks:"<<totalmarks<<endl;
        
        cout<<"name:"<<name<<endl;
        cout<<"rollno:"<<rollno<<endl;
    }
};
int main()
{
    student s;
    s.calculatetotal();
    s.display();
    s.input();
    return 0;
}