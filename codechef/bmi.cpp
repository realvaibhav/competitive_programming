#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   int m , h , ans=0 ;
   cin >> m >> h ;
   ans=m/(h*h) ;
   if (ans<=18)
   {
       cout << 1 << endl ;
   }
   else if (ans>=19 && ans<=24)
   {
       cout << 2 << endl ;
   }
   else if (ans>=25 && ans<=29)
   {
       cout << 3 << endl ;
   }
   else
   {
       cout << 4 << endl ;
   }
   
 
   return 0;
}


int main()
{
    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}