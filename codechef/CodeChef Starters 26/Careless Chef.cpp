#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   int arr[2*n] ;
   for(int i=0; i<2*n; i++)
   {
      cin >> arr[i]  ;
   }
   int odd=0 ;
   int even=0 ;
   for(int i=0; i<2*n; i++)
   {
      if(arr[i]&1)
      {
         odd++ ;
      }
      else
      {
         even++ ;
      }
   }

   if(odd%2==0 && even%2==0)
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
   for(int i = 0; i < t; i++)
   {
      solve() ;
   }  

   return 0  ;
}