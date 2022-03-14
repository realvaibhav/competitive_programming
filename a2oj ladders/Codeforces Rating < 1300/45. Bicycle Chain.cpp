#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


int main()
{
   ll n ;
   cin >> n ;
   ll arr[n] ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i] ;
   }
   ll m ;
   cin >> m ;
   ll brr[m] ;
   for(ll i=0 ; i<m ; i++)
   {
      cin >> brr[i] ;
   }
   ll temp=0 ;
   unordered_map<ll,ll> mp ;
   for(ll i=0 ; i<n ; i++)
   {
       for(ll j=0 ; j<m ; j++)
       {
           if(brr[j]%arr[i]==0)
           {
               temp=brr[j]/arr[i] ;
               mp[temp]++ ;
           }
       }
   }

   ll ans=1 ;
   
   for(auto x:mp)
   {
       ans=max(ans,x.first) ;
   }
   
   cout << mp[ans] << endl ;
   
   return 0  ;
}