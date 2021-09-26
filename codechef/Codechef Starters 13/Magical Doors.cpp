#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

void solution()
{ 
   ll p,a,b,c,x,y  ;
   cin >> p >> a >> b >> c >> x >> y ;
   
   if((b + a*x)<=(c + a*y))
   {
       cout << p/(b + a*x) << endl ;
   }
   else
   {
       cout << p/(c + a*y) << endl ;
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
      solution() ;
   }


   return 0  ;
}