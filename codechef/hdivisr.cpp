#include<bits/stdc++.h>
using namespace std ;
#define endl "\n" 

int main()
{
   int n , ans=0 ;
   cin >> n ;
   
   for (int i = 10; i >=1 ; i=i-1 )
   {
       if(n%i==0)
       {
           ans=i ;
           break ;
       }
   }
   
   cout << ans << endl ;
   
   return 0 ;
}