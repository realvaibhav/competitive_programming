#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
   ll n,k,sum=0 ;
   cin >> n >> k ;
   ll arr[n] ;
   for (ll i = 0; i < n; i++)
   {
       cin >> arr[i] ;
       sum=sum+arr[i] ;
   }
   if (sum%k==0)
   {
      cout << 0 << "\n" ;
   }
   else
   {
        cout << 1 << "\n" ;
   }
   
   
   
   return 0;
}

int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solution();
    }

    return 0;
}