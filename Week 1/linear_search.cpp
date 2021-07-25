#include<iostream>
using namespace std;
int main()
{
    int data,n,i,t,flag=0;
    cin>>t;
    while(t>0){
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cin>>data;
    for(i=0;i<n;i++)
    {
        if(a[i]==data)
        {
            cout<<"Present "<<i+1;
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        cout<<"Not Present "<<n;
    }
    t--;
    }
}
