#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

void solution()
{ 
   int value ;
   int zero=0 , one=0 , two=0   ;
   for(int i=1 ; i<=5 ; i++)
   {
       cin >> value ;
       if(value==0)
       {
           zero++ ;
       }
       else if(value==2)
       {
           two++  ;
       }
       else
       {
           one++  ;
       }
   }

   if(one==two)
   {
       cout << "DRAW" << endl ;
   }
   else if(two>one)
   {
       cout << "ENGLAND" << endl ;
   }
   else
   {
       cout << "INDIA" << endl ;
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