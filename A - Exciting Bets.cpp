#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >> t;

     while(t--)
    {
        long long a , b;
        cin >> a >> b;

        if(a==b)
        {
            cout << "0" << ' ' << "0" << endl;
        }
        else
        {
            long long diff = abs(a-b);
            cout << diff << ' ';
            if(a%diff==0 && b%diff==0)
                cout << "0" << endl;
            else
            {
                long long l = max(a,b)/diff;

                long long h = (diff*(l+1))-max(a,b);
                long long k = max(a,b)%diff;

                cout << min(h,k) << endl;
            }
        }
    }
}
