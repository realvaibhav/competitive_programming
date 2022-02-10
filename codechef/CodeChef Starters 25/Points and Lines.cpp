#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   unordered_set<int> s1,s2 ;
   int x,y ;
   for (int i=0; i<n; i++)
   {
      cin >> x >> y ;
      s1.insert(x)  ;
      s2.insert(y)  ;
   }

   cout << s1.size() + s2.size() << endl ;
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