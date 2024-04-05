#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double
#define F first
#define S second
#define ima INT_MAX
#define lmax LLONG_MAX
#define imi INT_MIN
#define lmin LLONG_MIN
#define pb push_back
#define all(v) v.begin(),v.end()
#define allr(v) v.rbegin(),v.rend()
#define fast ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lb lower_bound
#define ub upper_bound
#define gcd __gcd
int main()
{
     int t;
     cin>>t;
     while (t--)
     {
        
        string s;
        cin>>s;
        bool h=false;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='i'&& s[i+1]=='t')
            {
                cout<<"YES"<<endl;
                h=true;
                break;
            }
        }
        if(h==false)
        cout<<"NO"<<endl;
     }
    return 0;
}