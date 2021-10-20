#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int a , b , c  ;
   cin >> a >> b >> c  ;

   if(a!=7 && b!=7 && c!=7)
   {
       cout << "NO" << endl ;
   }
   else
   {
       cout << "YES" << endl ;
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