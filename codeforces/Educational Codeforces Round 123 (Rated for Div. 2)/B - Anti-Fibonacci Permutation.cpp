#include<bits/stdc++.h>
using namespace std ;

void solve()
{
   int n ;
   cin >> n ;

   for(int i=1 ; i<=n ; i++)
   {
      cout << i << " " ;
      for(int j=n ; j>=1 ; j--)
      {
         if(j!=i)
         {
            cout << j << " " ;
         }
      }
      cout << endl ;
   }
}

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
      solve() ;
   }
   
   return 0 ;
}