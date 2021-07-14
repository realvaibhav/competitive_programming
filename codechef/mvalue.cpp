#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{ 
   ll n ;
   cin >> n ;
   ll arr[n] ;
   for (ll i = 0; i < n; i++)
   {
        cin >> arr[i] ;
   }
   sort(arr,arr+n) ;
   ll ans=(arr[n-1]*arr[n-2])+(arr[n-1]-arr[n-2]) ;
   ll res=(arr[1]*arr[0])+(arr[1]-arr[0]) ;
   cout << max(ans,res) << endl ;

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