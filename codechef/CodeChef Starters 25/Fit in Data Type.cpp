#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n,x  ;
   cin >> n >> x  ;

   if(x==0)
   {
      cout << "0" << endl ;
   }
   else if(x<=n)
   {
      cout << x << endl ;
   }
   else
   {
      cout << (x%(n+1)) << endl ;
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