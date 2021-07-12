#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define endl "\n" 


int solution()
{
   ll n , res=0 , ans= 0 , m1=0 , m2=0 , sum=0 , total=0 ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i <n ; i++)
   {
      cin >> arr[i] ;
   }
   
   sort(arr,arr+n) ;

   ll x=0 , y=n-2 , z=n-1 ;
   sum=(arr[z]-arr[x]) + (arr[z]- arr[y]) + (arr[y]-arr[x]) ;
   y=1 ;
   total=(arr[z]-arr[x]) + (arr[z]- arr[y]) + (arr[y]-arr[x]) ;
   sum=max(sum,total) ;

   m1=n/2 ;
   m2=n/2+1 ;
   y=m1-1 ;
   res=(arr[z]-arr[x]) + (arr[z]- arr[y]) + (arr[y]-arr[x]) ;
   y=m2-1 ;
   ans=(arr[z]-arr[x]) + (arr[z]- arr[y]) + (arr[y]-arr[x]) ;
   ans = max(res,ans) ;
   
   cout << max(sum,ans) << endl ;

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