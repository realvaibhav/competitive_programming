#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll s , e ;
   cin >> s ;
   ll intro[s],ans=0 ;
   
   for (ll i = 0; i < s; i++)
   {
       cin >> intro[i] ;
   }
   for (ll i = 0; i < s; i++)
   {
       cin >> e ;
       ll time[e] ;
       ll d=intro[i] ;
       for (ll i = 0; i < e; i++)
       {
           cin >> time[i] ;
           ans+=time[i] ;
       }
       for (ll i = 1; i < e; i++)
       {
           ans-=d ;
       }
       
       
   }
   cout << ans << endl ;
  
  
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