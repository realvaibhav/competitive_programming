#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll n ;
   cin >> n ;
   ll arr[n] ;
   double sum=0 ;
   for (ll i=0; i<n; i++)
   {
      cin >> arr[i]  ;
      sum+=arr[i] ;
   }

   sort(arr,arr+n) ;
   sum-=arr[n-1] ;
   sum/=(n-1) ;
   sum+=arr[n-1] ;

   cout << fixed << setprecision(6) << sum << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solution() ;
   }  


   return 0  ;
}