#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[2][2]={{20,30},{10,50}};
    int i,j;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<arr[i][j];
        }
        cout<<"\n";
    }
}