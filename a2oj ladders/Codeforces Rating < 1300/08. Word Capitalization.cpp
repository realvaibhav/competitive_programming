#include<bits/stdc++.h>
using namespace std  ;

int main()
{
   string s ;
   cin >> s ;

   char c=s[0] ;
   int x =(int)c ;
   if(x>=97 && x<=122)
   {
       x-=32 ;
       c=(char)x ;
       s[0]=c ;
   }
   
   cout << s << endl ;

   return 0 ;
}