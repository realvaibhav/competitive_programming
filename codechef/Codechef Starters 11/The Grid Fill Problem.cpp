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
   
   if(n%2==0)
   {
       for(int i=0 ; i<n ; i++)
       {
           for(int j=0 ; j<n ; j++)
           {
               cout << "-1" << " " ;
           }
           cout << endl  ;
       }
   }
   else
   {
       for(int i=0 ; i<n ; i++)
       {
           for(int j=0 ; j<n ; j++)
           {
               if(i==j)
               {
                   cout << "1" << " " ;
               }
               else
               {
                   cout << "-1" << " " ;
               }
           }
           cout << endl  ;
       }
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