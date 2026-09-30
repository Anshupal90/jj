#include<iostream>
#include<string>
using namespace std;
int main()
{
    int mat[2][2];
    int arr[2][2];
    int sum[2][2];
    int i,j;
    
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>mat[i][j];
        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cin>>arr[i][j];
        } 
        
}
cout<<" enter the first matrix=\n";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<mat[i][j];
    }
    cout<<"\n";
}
cout<<"enter the second matrix=\n";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<arr[i][j];
    }
    cout<<"\n";
}
cout<<"adding matrix=\n";
for(i=0;i<2;i++)
{
    for(j=0;j<2;j++){

    sum[i][j]=mat[i][j]+arr[i][j];
    }
}

for(i=0;i<2;i++)
{
    for(j=0;j<2;j++)
    {
        cout<<sum[i][j];
    }
    cout<<"\n";
}
return 0;
}

