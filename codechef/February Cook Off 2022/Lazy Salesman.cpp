#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n, w  ;
   cin >> n >> w ;
   int arr[n] ;
   int sum=0 ;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i]  ;
      sum+=arr[i] ;
   }
   if(sum==w)
   {
      cout << "0" << endl ;
   }
   else
   {
      sort(arr,arr+n) ;
      int count=0 ;
      int temp=0 ;
      for(int i=n-1; i>=0; i--)
      {
         count++ ;
         temp+=arr[i] ;
         if(temp>=w)
         {
            cout << n-count << endl ;
            break ;
         }
      }
   }
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