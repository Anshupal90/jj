#include<iostream>
using namespace std;
int main()
{
    int m,s,c;
    int total,per;
    string name;
    cout<<"enter student name:";
    cin>>name;
    cout<<"enter math marks:";
    cin>>m;
    cout<<"enter science marks:";
    cin>>s;
    cout<<"enter computer marks:";
    cin>>c;
    total=m+s+c;
    per=total/3;
    cout<<"student name:"<<name<<endl;
    cout<<"total marks:"<<total<<endl;
    cout<<" percentage:"<<per<<endl;
    return 0;
}