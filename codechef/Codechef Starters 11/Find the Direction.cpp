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
   int res=n%4 ;
   if(res==0)
   {
       cout << "North" << endl ;
   }
   else if(res==1)
   {
       cout << "East" << endl ;
   }
   else if(res==2)
   {
       cout << "South" << endl ;
   }
   else
   {
       cout << "West" << endl ;
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