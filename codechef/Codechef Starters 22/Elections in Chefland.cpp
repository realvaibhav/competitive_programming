#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
   int a , b , c ;
   cin >> a >> b >> c ;

   if(a>50)
   {
      cout << "A" << endl ;
   }
   else if(b>50)
   {
      cout << "B" << endl ;
   }
   else if(c>50)
   {
      cout << "C" << endl ;
   }
   else
   {
      cout << "NOTA" << endl ;
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