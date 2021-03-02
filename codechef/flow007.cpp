#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int solution()
{
   ll n,r=0,flag=0 ;
   cin >> n ;
   while (n>0)
   {
       r=n%10 ;
       n=n/10 ;
       if (r==0&&flag==0)
       {
          flag=0 ;
       }
       else
       {
           cout << r ;
           flag=1 ;
       }
   }
    
   cout << "\n" ;

   
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