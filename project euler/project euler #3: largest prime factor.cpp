#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{  
    ll t ;
    cin >> t ;
    while(t--)
    {
        ll n ;
        cin >> n ;
        ll ans=0 ;
        for(ll i=2 ; i<=sqrt(n) ; i++)
        {
            ll count=0 ;
            if(n%i==0)
            {
                while(n%i==0)
                {
                    count++ ;
                    n=n/i ;
                }
                ans=i ;
            }
        }
        if(n>1)  
        {
            cout << n  << endl ;
        }
        else
        {
            cout << ans << endl ;
        }
    }


    return 0  ;
}
