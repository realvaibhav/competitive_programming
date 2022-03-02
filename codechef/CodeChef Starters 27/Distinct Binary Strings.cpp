#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   string s ;
   cin >> s ;
   int count=1 ;
   for(int i=1 ; i<n ; i++)
   {
      if(s[i]!=s[i-1])
      {
         count++ ;
      }
   }
   cout << count << endl ;
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