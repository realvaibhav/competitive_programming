#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000000
#define endl "\n" 


int solution()
{
   
   ll n ;
   cin >> n ;
   ll ans=0 , res=0  , r= 0 ;
   if ((n%2050!=0)||(n<2050))
   {
       cout << "-1" << endl ;
   }
   else
   {
       ans=n/2050 ;
       while (ans>0)
       {
           r=ans%10 ;
           res+=r ;
           ans/=10 ;
       }
       
       cout << res << endl ;

   }
 
 
   return 0  ;
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