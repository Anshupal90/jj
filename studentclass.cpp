#include<iostream>
#include<string>
using namespace std;
class student{
    public:
    string name;
    int rollno;
    double marks;
};
int main()
{
    student s;
    s.name="Anshu";
    s.rollno=1;
    s.marks=90;
    cout<<s.name<<endl;
    cout<<s.rollno<<endl;
    cout<<s.marks<<endl;
    return 0;
}