#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll k  ;
   cin >> k  ;

   if(k==2)
   {
       cout << "1" << endl ;
       return ;
   }

   if(k%2!=0)
   {
       cout << 0 << endl ;
   }
   else
   {
       if((k/2)%2!=0)
       {
           cout << 1 << endl ;
       }
       else
       {
           ll count=0 ;
           while(k%2==0)
           {
               count++ ;
               k/=2 ;
           }

           cout << count << endl ;
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