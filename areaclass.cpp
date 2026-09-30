#include<iostream>
#include<string>
using namespace std;
class rectangle
{
    public:
    int length;
    int breath;
    void area()
    {
        cout<<"Area="<<length*breath;
    }
};
int main()
{
    rectangle t;
    t.length=20;
    t.breath=4;
   t.area();
    return 0;
}
