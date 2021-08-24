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
   int n ;
   cin >> n ;
   string s ;
   string t ;
   cin >> s ;
   cin >> t ;  
   int coding=0 ; 
   int english=0 ;
   int genious=0 ;
   for(int i=0 ; i<n ; i++)
   {
      if(s[i]=='1' && t[i]=='0')
      {
         coding++ ;
      }
      if(t[i]=='1' && s[i]=='0')
      {
         english++ ;
      }
      if(s[i]=='1' && t[i]=='1')
      {
         genious++ ;
      }

   }

   cout << min((min(coding,english) + genious),n/2)  << endl ;

   
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