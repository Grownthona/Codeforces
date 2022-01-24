#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

    while(t--)
    {
        long long n , k , f=0 , c=0;
        cin >> n >> k;

        long long l = (n-k)+1;
        vector<long long> v;

        if(k+(k+1)>n)
            cout << "-1" << endl;
        else
        {
            for(int i=0;i<n;i++)
            {
                if(!f)
                {
                    c++;
                    v.push_back(c);
                    if(l<=n)
                        f = 1;
                }
                else if(f)
                {
                    v.push_back(l);
                    l++;
                    f = 0;
                }
            }

            for(int i=0;i<v.size();i++)
                cout << v[i] << ' ';

            cout << endl;
        }
    }
}
