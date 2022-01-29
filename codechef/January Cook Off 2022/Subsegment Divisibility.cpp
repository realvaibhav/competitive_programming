#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 


void solve()
{ 
   int n  ;
   cin >> n  ;
   
   if(n==1)
   {
       cout << 1 << endl ;
   }
   else if(n==2)
   {
       cout << 1 << " " << 2 << endl ;
   }
   else
   {
       int len=0 ;
       int a=2 ;
       int b=3 ;
       while(len<n)
       {
           if(len%2==0)
           {
               cout << a << " " ;
               a+=4 ;
               len++ ;
           }
           else
           {
               cout << b << " " ;
               b+=4 ;
               len++ ;
           }
       }

       cout << endl ;
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