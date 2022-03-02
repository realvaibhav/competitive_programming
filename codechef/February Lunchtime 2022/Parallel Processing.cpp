#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   ll n  ;
   cin >> n  ;
   ll arr[n] ;
   for(ll i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   ll sum1=arr[0] , sum2=arr[n-1] ;
   ll i=1 , j=n-2 ;
   while(i<=j)
   {
      if(sum1<=sum2)
      {
         sum1+=arr[i] ;
         i++ ;
      }
      else
      {
         sum2+=arr[j] ;
         j-- ;
      }
   }

   cout << max(sum1,sum2) << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   ll t ;
   cin >> t ;
   for(ll i=0; i<t; i++)
   {
      solve() ;
   }  

   return 0  ;
}