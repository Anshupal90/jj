#include<iostream>
#include<string>
using namespace std;
void add(int a,int b)
{
    cout<<"add"<<(a+b);

}
void sub(int a,int b)
{
    cout<<"subtract"<<(a-b);
}
int main()
{
    int a;
    
    cout<<"press the number=";
    cin>>a;
    if(a==1)
{
    add(10,5);

}
else if(a==2)
{
    sub(10,5);
}
else{
    cout<<"wrong digit";
}
return 0;
}