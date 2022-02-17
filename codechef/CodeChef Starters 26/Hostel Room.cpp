#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n,x  ;
   cin >> n >> x ;
   int arr[n] ;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   int sum=x ;
   int ans=x ;
   for(int i=0; i<n; i++)
   {
      sum+=arr[i] ;
      ans=max(ans,sum) ;
   }
   cout << ans << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for(int i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}