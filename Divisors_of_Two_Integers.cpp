#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main()
{
    ll n;
    cin >> n;

    ll a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    ll k = a[n-1],k2=0;
    map<ll,ll>m;
    for(int i=n-1;i>=0;i--)
    {
        if(k%a[i]==0 && m[a[i]]==0)
           m[a[i]]++;
        else
            k2 = max(k2,a[i]);
    }
    cout << k << ' ' << k2 << endl;
}
