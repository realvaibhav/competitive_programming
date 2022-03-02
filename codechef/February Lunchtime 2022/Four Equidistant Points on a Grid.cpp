#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{
   int d  ;
   cin >> d ;

   if(d%2!=0)
   {
      cout << "-1" << endl ;
      return ;
   }
   
   cout << 0 <<  " " << (-d)/2 << endl ;
   cout << 0  <<  " " << d/2 << endl ;
   cout << (-d)/2  << " " << 0 << endl ;
   cout << d/2 << " " << 0 << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);
   cout.tie(NULL);

   solve() ;

   return 0  ;
}