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
   sort(arr,arr+n) ;
   cout << (arr[n-1]-arr[0])*arr[n-2] << endl ;

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


   return 0  ;
}