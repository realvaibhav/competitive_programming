#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   ll n  ;
   cin >> n  ;
   ll arr[n] ;
   for(ll i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   ll ans=0 ;
   for(ll i=0; i<n; i++)
   {
      ans=(ans|arr[i]) ;
   }

   cout << ans << endl ;
   
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for(ll i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}