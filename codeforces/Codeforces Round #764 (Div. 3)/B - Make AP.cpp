#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   ll a,b,c ;
   cin >> a >> b >> c  ;

   if(a+c==2*b)
   {
       cout << "YES" << endl ;
   }
   else if(a+c<2*b)
   {
       ll temp1=2*b-a ;
       ll temp2=2*b-c ;
       if(temp1%c==0 || temp2%a==0)
       {
           cout << "YES" << endl ;
       }
       else
       {
           cout << "NO" << endl ;
       }
   }
   else
   {
       if(((a+c))%(2*b)==0)
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
      solution() ;
   }  


   return 0  ;
}