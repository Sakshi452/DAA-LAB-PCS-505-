#include<iostream>
using namespace std;
int binarysearch(int n,int arr[],int key)
{
    int left=0,right=n-1,mid;
    while(left<=right)
    {
        mid = (left+right)/2;
        if(key==arr[mid])
        {
            return 1;
        }
        else if(key<arr[mid])
        {
            right = mid-1;
        }
        else
        {
            left=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n,i,t,key,ans;
    cin>>t;
    while(t>0){
        cout<<"Enter no. of elements"<<endl;
        cin>>n;
        cout<<"Enter sorted array"<<endl;
        int arr[n];
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        cout<<"Enter key"<<endl;
        cin>>key;
        ans=binarysearch(n,arr,key);
        if(ans == 1)
        {
            cout << "ELEMENT FOUND" << endl;
        }
        else
        {
            cout << "ELEMENT NOT FOUND" << endl;
        }
    t--;
    }


}
