#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int a, b, c ;
   cin >> a >> b >> c  ;

   cout << max((a+c),b) << endl ;

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