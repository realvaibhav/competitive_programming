#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int x , y  ;
   cin >>  x  >>  y ;

   if(x==y)
   {
       cout << 0 << endl ;
   }
   else if(x>y)
   {
       cout << (x-y) << endl ;
   }
   else
   {
       if((y-x)%2==0)
       {
           cout << (y-x)/2 << endl  ;
       }
       else
       {
           cout << (y-x)/2 + 2 << endl  ;
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