#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    ll n , k , d , ans=0 , sum=0 ;
     cin >> n >> k >> d ;
    ll arr[n] ;
     for (ll i = 0; i < n; i++)
     {
          cin >> arr[i] ;
          sum=sum+arr[i] ;
     }
     ans=sum/k ;
     if (ans<=d)
     {
         cout << ans << "\n" ;
     }
     else
     {
         cout << d << "\n" ;
     }
     
    

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
    
    return 0 ;
}