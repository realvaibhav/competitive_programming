#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll n ;
   cin >> n ;

   if(n<=26)
   {
      ll x=97 ;
      for(ll i=1 ; i<=n ; i++)
      {
         cout << char(x) ;
         x++ ;
      }

   }
   else
   {
      ll temp=n%26 ;
      ll len=n/26 ;

      for(ll i=1 ; i<=len ; i++)
      {
         cout << "abcdefghijklmnopqrstuvwxyz" ;
      }

      ll x=97 ;
      for(ll i=1 ; i<=temp ; i++)
      {
         cout << char(x) ;
         x++ ;
      }
   }

   cout << endl ;
   


}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solution() ;
   }  


   return 0  ;
}