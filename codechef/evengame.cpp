#include<bits/stdc++.h>
#define endl "\n" 
using namespace std ;
typedef long long int ll ;
 

int solution()
{
   ll n, sum=0 ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i <n ; i++)
   {
      cin >> arr[i] ;
      sum+=arr[i] ;
      
   }
   if(sum%2==0)
   {
       cout << 1 << endl ;
   }
   else 
   {
       cout << 2 << endl ;
   }
   
   return 0;
}


int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 1; i <= t; i++)
    {
       solution() ;
    }

    return 0;
}