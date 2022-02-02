#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   double x,y ;
   cin >> x >> y ;
   
   if(y==0)
   {
      cout << x << endl ;
   }
   else if(y==x)
   {
      cout << 2*x - 1 << endl ;
   }
   else
   {
      cout << (x-y)+2*y << endl ;
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