#include<iostream>
#include<string>
using namespace std;
int main()
{
    int arr[5];
    int i,lar,sec;
    cout<<"enter the number";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    lar=arr[0];
    sec=arr[0];
for(i=0;i<5;i++)
{
    if(arr[i]>lar)
    {
        sec=lar;
        lar=arr[i];
    }
    else if(arr[i]>sec&&arr[i]!=lar)
    {
        sec=arr[i];
    }
}
    cout<<"second largest"<<sec; 
return 0;
}

