#include<iostream>
using namespace std;
int main()
{
    int data,n,i,flag=0;
    cout<<"Enter no. of elements"<<endl;
    cin>>n;
    cout<<"Enter the array"<<endl;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<"Enter the element to be searched"<<endl;
    cin>>data;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            cout<<"Present at "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not Present";
    }
}

