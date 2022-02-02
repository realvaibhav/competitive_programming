#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   double a,b,c,p,q,r ;
   cin >> a >> b >> c >> p >> q >> r ;

   double sum=a+b+c ;
   double res=p+q+r ;
   res/=2   ;


   if(sum>res)
   {
      cout << "YES" << endl ;
   }
   else
   {
      double temp=max(p-a,q-b) ;
      temp=max(temp,r-c) ;

      if((sum+temp)>res)
      {
         cout << "YES" << endl ;
      }
      else
      {
         cout << "NO" << endl ;
      }
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