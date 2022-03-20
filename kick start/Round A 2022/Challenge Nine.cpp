#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve(ll test)
{
    string s ;
    cin >> s ;
    ll n=s.size() ;
    ll x=0,sum=0 ;
    ll pos=0 ;
    for(ll i=0 ; i<n ; i++)
    {
        x=s[i]-48 ;
        sum+=x ;
    }
    if(sum%9==0)
    {
        cout << "Case #" << test << ": " ;
        cout << s[0] << "0" ;
        for(ll i=1 ; i<n ; i++)
        {
            cout << s[i] ;
        }
        cout << endl ;
    }
    else
    {
        ll temp=9-(sum%9) ;
        if(n==1)
        {
            if(temp<5)
            {
                cout << "Case #" << test << ": " ;
                cout << temp << s[0] << endl ;
                return ;
            }
        }
        bool flag=true ;
        for(ll i=0 ; i<=n-1 ; i++)
        {
            x=s[i]-48 ;
            if(temp<x)
            {   
                flag=false ;
                pos=i ;
                break ;
            }
            else
            {
                continue ;
            }
        }
        if(flag==true)
        {
            cout << "Case #" << test << ": " ;
            for(ll i=0 ; i<n ; i++)
            {
                cout << s[i] ;
            }
            cout << temp ;
            cout << endl ;
            
        }
        else
        {
            if(flag==false)
            {
                if(pos==0)
                {
                    cout << "Case #" << test << ": " ;
                    cout << temp ;
                    for(ll i=0 ; i<n ; i++)
                    {
                        cout << s[i] ;
                    }
                    cout << endl ;
                }
                else
                {
                    cout << "Case #" << test << ": " ;
                    for(ll i=0 ; i<pos ; i++)
                    {
                        cout << s[i] ;
                    }
                    cout << temp ;
                    for(ll i=pos ; i<n ; i++)
                    {
                        cout << s[i] ;
                    }
                    cout << endl ;
                }
            }
        }

    }
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }


    return 0;
} 
