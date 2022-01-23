#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n,c=0,t=0;
        cin >> n;

        long long a[n];
        map<long long,long long> m;

        for(int i=0;i<n;i++)
            cin >> a[i];

        sort(a,a+n);
         for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1])
                a[i]= - a[i];
        }
        for(int i=0;i<n;i++)
        {
            if(m[a[i]]==0)
            {
                m[a[i]] = 1;
            }
            else if(a[i]!=0)
            {
                m[a[i]]++;
            }
        }

        cout << m.size() << endl;
    }
}


