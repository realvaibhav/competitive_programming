#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   int arr[n] ;
   vector<int> odd ;
   vector<int> even ;
   for(int i=0; i<n; i++)
   {
      cin >> arr[i]  ;

      if(arr[i]&1)
      {
         odd.push_back(arr[i]) ;
      }
      else
      {
         even.push_back(arr[i]) ;
      }
   }

   for(int i=1 ; i<(odd.size()) ; i++)
   {
      if(odd[i]<odd[i-1])
      {
         cout << "NO" << endl ;
         return ;
      }
   }
   
   for(int i=1 ; i<(even.size()) ; i++)
   {
      if(even[i]<even[i-1])
      {
         cout << "NO" << endl ;
         return ;
      }
   }

   cout << "YES" << endl ;
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