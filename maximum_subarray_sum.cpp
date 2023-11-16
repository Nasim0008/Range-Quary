#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
    int n;
    cin>>n;
    ll mx = LONG_LONG_MIN;
    ll  sum =0;
    for(int i=0;i<n;i++)
    {
       ll value;
        cin>>value;
        sum+=value;
        mx = max(sum,mx);
        sum = max((ll)0,sum);
    }
    cout<<mx<<endl;
}