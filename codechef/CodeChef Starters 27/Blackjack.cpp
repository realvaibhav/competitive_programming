#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   
   int x,y ;
   cin >> x >> y ;
   if(21-(x+y)<=10)
   {
      cout << 21-(x+y) << endl ;
   }
   else
   {
      cout << "-1" << endl ;
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