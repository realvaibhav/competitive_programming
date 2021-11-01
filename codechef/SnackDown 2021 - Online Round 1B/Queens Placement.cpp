#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int n ;
   cin >> n ;

   if(n%2==0)
   {
      for(int i=0 ; i<n ; i++)
      {
         for(int j=0 ; j<n ; j++)
         {
            if(i!=0 && i!=n-1 && j==1)
            {
               cout << 'Q' ;
            }
            else
            {
               cout << "." ;
            }
         }
         cout << endl ;
      }
   }
   else
   {
      for(int i=0 ; i<n ; i++)
      {
         for(int j=0 ; j<n ; j++)
         {
            if(i!=0 && i!=n-1 && j==n/2)
            {
               cout << 'Q' ;
            }
            else
            {
               cout << "." ;
            }
         }
         cout << endl ;
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
      solution() ;
   }  


   return 0  ;
}