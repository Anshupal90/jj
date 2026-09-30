#include<iostream>
#include<string>
using namespace std;
class employee
{
    
    string name;
    double salary;
    int exp;
   public:
   void calculatesalary(){
    salary=(exp<2)?20000:(exp<5)?35000:500000;
   }
  void input(){
    cout<<"name:";
    cin>>name;
    cout<<"experience:";
    cin>>exp;

  }
  void display(){
    cout<<"name:"<<name<<endl;
    cout<<"experience:"<<exp<<endl;
    cout<<"salary:"<<salary<<endl;
  }
};
int main()
{
    employee e;
    e.input();
    e.calculatesalary();
    e.display();
    return 0;
}