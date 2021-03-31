#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll locations , servers , ans= 0 , res=0 ;
   cin >> locations >> servers ;

   if (locations%servers==0)
   {
       ans=(locations/servers) ;
       res=servers ;
   }
   else
   {
       ans=(locations/servers)+1 ;
       res=locations%servers ;
   }

   cout << ans << " " << res << endl ;
   
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