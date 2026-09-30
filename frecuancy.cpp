#include<iostream>
using namespace std;
int main()
{
    int arr[5];
    int i,j,fre;
    cout<<"enter the element=";
    for(i=0;i<5;i++)
    {
        cin>>arr[i];
    }
    
    for(i=0;i<5;i++)
    {fre=1;
        for(j=i+1;j<5;j++)
        {
            if(arr[i]==arr[j])
            {
                fre++;
            }
        }
        cout<<arr[i]<<"="<<fre<<"times"<<endl;
    }
    
    return 0;
}