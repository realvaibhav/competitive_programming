#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

int solution()
{
   int value ;
   int sunny=0 , rainy=0 ;
   for(int i=0 ; i<7 ; i++)
   {
      cin >> value ;
      if(value==1)
      {
          sunny++ ;
      }
      else
      {
          rainy++ ;
      }
   }
   
   if(sunny>rainy)
   {
       cout <<  "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
   }

   
   return 0 ;
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