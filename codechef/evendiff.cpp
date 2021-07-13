#include<bits/stdc++.h>
#define endl "\n" 
using namespace std ;
typedef long long int ll ;
 

int solution()
{
   ll n,odd=0,even=0 ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i <n ; i++)
   {
      cin >> arr[i] ;
      if(arr[i]%2==0)
      {
          even++ ;
      }
      else
      {
          odd++ ;
       }
      
   }
   if(even>=odd)
   {
       cout << odd << endl ;
   }
   else 
   {
       cout << even << endl ;
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