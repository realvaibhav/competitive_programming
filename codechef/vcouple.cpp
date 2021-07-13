#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   ll n ;
   cin >> n ;
   ll girls[n] , boys[n] ;
   for (ll i = 0; i < n; i++)
   {
       cin >> boys[i] ;
   }
   for (ll i = 0; i < n; i++)
   {
       cin >> girls[i] ;
   }
   
   sort(boys,boys+n) ;
   sort(girls,girls+n) ;

   ll ans[n] ;
   for (ll i = 0; i < n; i++)
   {
        ans[i]=boys[n-1-i]+girls[i] ;   
   }
   sort(ans,ans+n) ;
   cout << ans[n-1] << endl ;
   
   
   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}