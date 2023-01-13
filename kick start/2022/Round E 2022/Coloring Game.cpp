#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(ll test)
{
    ll n ;
    cin >> n ;
    
    ll ans=ceil(n/5.0) ;    

    cout << "Case #" << test << ": " << ans << endl  ;
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
