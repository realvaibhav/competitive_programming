#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   ll n , k ;
   cin >> n >> k ; 
   ll total_matches=(n-1)*(n) ;
   total_matches/=2  ;
   ll diff=n-k ;
   ll temp=(diff-1)*(diff) ;
   temp/=2  ;
   ll num=total_matches/n ;
   ll ans=(total_matches-temp)/k ;
   num*=2 ;
   ans*=2 ;

   cout << max(ans,num) << endl  ;

   

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