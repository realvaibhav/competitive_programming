#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve(ll test)
{
    string s ;
    cin >> s ;
    string p ;
    cin >> p ;
    int n1=s.size() ;
    int n2=p.size() ;
    ll t1[256]={0} ;
    for(ll i=0 ; i<n1 ; i++)
    {
        t1[s[i]]++ ;
    }
    ll t2[256]={0} ;
    for(ll i=0 ; i<n2 ; i++)
    {
        t2[p[i]]++ ;
    }

    ll ans=0 ;
    bool temp[n1] ;
    for(int i=0 ; i<n1 ; i++)
    {
        temp[i]=true ;
    }
    if(n1>n2)
    {
        cout << "Case #" << test << ": " << "IMPOSSIBLE" << endl ;
    }
    else
    {
        ll i=0 , j=0 ;
        while(true)
        {
            if(j==n2)
            {
                break ;
            }

            if(s[i]==p[j])
            {
                temp[i]=false ;
                i++ ; 
                j++ ;
            }
            else
            {
                ans++ ;
                j++ ;
            }
        }
        for(int i=0 ; i<n1 ; i++)
        {
            if(temp[i]==true)
            {
                cout << "Case #" << test << ": " << "IMPOSSIBLE" << endl ;
                return ;
            }
        }

        cout << "Case #" << test << ": " << ans << endl ;
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
