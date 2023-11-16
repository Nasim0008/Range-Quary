#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n+3];
    int  pre[n+2];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    pre[0]=arr[0];
    for(int i=1;i<n;i++)
    {
        pre[i]=arr[i]+pre[i-1];
    }

    int q;
    cin>>q;
    while(q--)
    {
        int l,r;
        cin>>l>>r;
        if(l==0)
        {
            cout<< pre[r]<<endl;// this the sum from l to r of the array elements
        }
        else
        {
            cout<< pre[r]-pre[l-1]<<endl;// this te sum from l to r of the array elements
        }
    }
}