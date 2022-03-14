#include<bits/stdc++.h>
using namespace std ;
#define endl "\n" 


int main()
{
   int n ;
   cin >> n ;
   string s[n] ;
   for(int i=0 ; i<n ; i++)
   {
       cin >> s[i] ;
   }
   int count1=0 ,  count2=0 ;
   string temp1=s[0] ;
   string temp2 ;
   for(int i=0 ; i<n ; i++)
   {
       if(s[i]==temp1)
       {
           count1++ ;
       }
       else
       {
           count2++ ;
           temp2=s[i] ;
       }
   }

   if(count1>count2)
   {
       cout << temp1 << endl ;
   }
   else
   {
       cout << temp2 << endl ;
   }

   
   return 0  ;
}