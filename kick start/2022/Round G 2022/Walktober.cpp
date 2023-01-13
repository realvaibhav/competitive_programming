#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solve(ll test)
{
    ll m, n, p ;
    cin >> m >> n >> p ;
    ll arr[m][n] ;
    for(ll i=0; i<m ; i++)
    {
      for(ll j=0; j<n ; j++)
      {
         cin >> arr[i][j] ;
      }
    }
    ll ans=0 ;
    for(ll j=0; j<n ; j++)
    {
      ll temp=1 ;
      for(ll i=0; i<m ; i++)
      {
         if(arr[i][j]>temp)
         {
            temp=arr[i][j] ;
         }
      }

      ll tar=arr[p-1][j] ;
      if(tar<temp)
      {
         ans+=(temp-tar) ;
      }
    }


    cout << "Case #" << test << ": " << ans <<  endl  ;
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
