#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll n  ;
   cin >> n  ;
   ll arr[n] ;
   for(ll i=0 ; i<n ; i++)
   {
      cin >> arr[i]  ;
   }  
   
   ll mn=arr[0] ;
   ll mx=arr[0] ;

   for(ll i=0 ; i<n ; i++)
   {
       mx=max(mx,arr[i]) ;
       mn=min(mn,arr[i]) ;
   }

   cout << mx-mn << endl ;



}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solution() ;
   }  


   return 0  ;
}