#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// for(auto x : vec )
// vector<int> vec 
// set<int> s 

void solution()
{ 
   string original ;
   cin >> original ;
   ll n=original.size() ;
   string waved=original ;
   for(ll i=0 ; i<n ; i++)
   {
       if(original[i]=='1')
       {
           waved[i]='0' ;
       }
       else
       {
           waved[i]='1' ;
       }
   }
   bool flag=true ;
   ll count=0 ;
   for(ll i=0 ; i<n ; i++)
   {
       if(original[i]=='1')
       {
           if(flag==true)
           {
               continue ;
           }
           else
           {
               count++ ;
               flag=true ;
           }
       }
       if(waved[i]=='1')
       {
           if(flag==true)
           {
               count++ ;
               flag=false ;
           }
           else
           {
               continue ;
           }
       }
   }
   
   cout << count << endl ;

   
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