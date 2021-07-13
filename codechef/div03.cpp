#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   ll arr[10] ;
   for (ll i = 0; i < 10; i++)
   {
        cin >> arr[i] ;
   }
   ll k , ans=0;
   cin >> k ;
   for (ll i = 9; i >=0; i--)
   {
       if (k-arr[i] >=0 )
       {
           k-=arr[i] ;
           ans=i ;
       }
       else
       {
           ans=i+1 ;
           break ;
       }
   }

   cout << ans << endl ;
    
   return 0;
}


int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}