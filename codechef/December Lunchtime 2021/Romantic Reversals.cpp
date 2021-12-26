#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll n , k  ;
   cin >> n >> k  ;
   string s  ;
   cin >> s  ;
   
   string s2=s.substr(0,k) ;
   reverse(s2.begin(),s2.end()) ;
   // cout << s << " " << s2 << endl  ;
   ll temp=k-1 ; 

   if(temp%2==1)
   {
      cout << s2[temp/2] ;
      ll i=(temp/2)-1 ; 
      ll j=(temp/2)+1 ;

      while(i>=0 && j<=temp-1)
      {
         cout << s2[j] << s2[i] ;
         j++  ;
         i--  ;
      }
      cout << s2[k-1] ;
      for(ll x=k ; x<n ; x++)
      {
         cout << s[x] ;
      }
      cout << endl  ;
   }
   else
   {
      ll i=(temp/2)-1 ;
      ll j=(temp/2) ; 
      
      while(i>=0 && j<=temp-1)
      {
         cout << s2[j] << s2[i] ;
         j++  ;
         i--  ;
      }
      cout << s2[k-1] ;
      for(ll x=k ; x<n ; x++)
      {
         cout << s[x] ;
      }
      cout << endl  ;

   }
   
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