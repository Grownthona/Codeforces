#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long t;
    cin >>t;

    while(t--)
    {
        long long n,k;
        cin >> n >> k;

        string s,s2;
        cin >> s;

        s2 = s;

        reverse(s2.begin(),s2.end());

        if(s==s2 || k==0)
            cout << "1" << endl;
        else
            cout << "2" << endl;

    }
    return 0;
}
