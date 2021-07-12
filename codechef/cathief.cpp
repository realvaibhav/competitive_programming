#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int solution()
{
   ll n,d=0,k,x,y ;
   cin >> x >> y >> k >> n ;
   
   if (x==y)
   {
      cout << "Yes" << "\n" ;
      return 0;
   }
   else if (x>=y)
   {
         while (x>=y)
         {
            if (x==y)
            {
            cout << "Yes" << "\n" ;
            return 0;
            }
            else
            {
               if (y-k>=0)
               {
               y=y-k ;
               x=x-k ;
               }
               else
               {
               y=y+k;
               x=x-k ;
               }
            }
         }   
   }
   else if (x<=y)
   {
      while (x<=y)
      {
          if (x==y)
          {
             cout << "Yes" << "\n" ;
             return 0;
          }
          else
          {
               if (x-k>=0)
               {
               y=y-k ;
               x=x-k ;
               }
               else
               {
               y=y-k;
               x=x+k ;
               }
          }
      }
   }
   cout << "No" << "\n" ;
   
   
   
   
   
   
   return 0;
}

int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solution();
    }

    return 0;
}