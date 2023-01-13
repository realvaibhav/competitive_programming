#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(ll test)
{
    ll n ;
    cin >> n ;
    string s ;
    cin >> s ;
    ll small=0, cap=0, digit=0, special=0 ;
    for(int i=0 ; i<n ; i++)
    {
        if(s[i]>='A'&&s[i]<='Z')
        {
            cap++ ;
        }
        else if(s[i]>='a'&&s[i]<='z')
        {
            small++ ;
        }
        else if(s[i]>='0'&&s[i]<='9')
        {
            digit++ ;
        }
        else if(s[i]=='#' || s[i]=='@' || s[i]=='*' || s[i]=='&')
        {
            special++ ;
        }
    }

    if(n>=7 && small>=1 && cap>=1 && digit>=1 && special>=1)
    {
        cout << "Case #" << test << ": " << s << endl  ;
    }
    else
    {
        if(small==0)
        {
            s+="a" ;
            n++ ;
        }
        
        if(cap==0)
        {
            s+="A" ;
            n++ ;
        }
        
        if(digit==0)
        {
            s+="1" ;
            n++ ;
        }
        
        if(special==0)
        {
            s+="#" ;
            n++ ;
        }

        if(n<7)
        {
            ll x=7-n ;
            for(ll i=0 ; i<x ; i++)
            {
                s+="1" ;
            }
        }

        cout << "Case #" << test << ": " << s << endl  ;
        
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
