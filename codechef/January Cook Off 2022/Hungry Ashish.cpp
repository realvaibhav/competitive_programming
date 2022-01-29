#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
  int x  , y , z  ;
  cin >> x >> y >> z  ;

  if(x>=y)
  {
     cout << "PIZZA" << endl ;
  }
  else if(x>=z)
  {
     cout << "BURGER" << endl ;
  }
  else
  {
     cout << "NOTHING" << endl ;
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