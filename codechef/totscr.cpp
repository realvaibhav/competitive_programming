#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll n , k ;
   cin >> n >> k;
   ll arr[k] ;
   for (ll i = 0; i < k; i++)
   {
        cin >> arr[i] ;
   }
   ll ans=0 ;
   string res ;
   for (ll i = 0; i < n; i++)
   {
       ans=0 ;
       cin >> res ;
       for (ll i = 0; i < k; i++)
       {
           if (res[i]=='1')
            {
                ans+=(arr[i]) ;
            }
       }
       
       cout << ans << endl ;
       
   }

   
   return 0;
}


int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}