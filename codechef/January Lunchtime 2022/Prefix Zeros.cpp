#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   ll n,k ;
   cin >> n >> k ;

   string s ;
   cin >> s ;
   ll i=0 ;
   ll ans=0 ;
   while(i<n)
   {
      ll x=s[i]-48 ;
      ll temp=10-x ;
      
      if(x==0)
      {
         temp=0 ;
      }

      if(k>=temp)
      {
         k=((k-temp)/10)*10 + temp  ;
         ans++ ;
         i++ ;
      }
      else
      {
         break ;
      }
   }

   cout << ans << endl ;

   

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (ll i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}