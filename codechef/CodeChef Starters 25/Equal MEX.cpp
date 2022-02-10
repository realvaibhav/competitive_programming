#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   n*=2 ;
   int arr[n] ;
   
   for(int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
   }
   int mx=arr[0] , mn=arr[0] ;
   for(int i=0; i<n; i++)
   {
      mx=max(mx,arr[i]) ;
      mn=min(mn,arr[i]) ;
   }
   map<int,int> mp ;
   for(int i=0; i<n; i++)
   {
      mp[arr[i]]++ ;
   }
   bool flag=true ;
   for(int i=0; i<(n/2); i++)
   {
      if(mp[i]<2)
      {
         if(mp[i]==0)
         {
            break ;
         }
         else
         {
            flag=false ;
            break ;
         }
      }
   }

   if(flag==true)
   {
      cout << "YES" << endl ;
   }
   else
   {
      cout << "NO" << endl ;
   }
   

}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   int t ;
   cin >> t ;
   for (int i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}