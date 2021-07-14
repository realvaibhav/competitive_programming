#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   ll n , x , res=0 , ans=0 ;
   cin >> n >> x ;
   ll space[n] , rating[n] ;
   for (ll i = 0; i <  n; i++)
   {
       cin >> space[i] >> rating[i] ;
       if (space[i]<=x && rating[i]>res)
       {
           res=rating[i] ;
       }
       
   }

   cout << res << endl ;
   

   
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