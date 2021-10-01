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
   ll lvalue , rvalue  ;
   cin >> lvalue >> rvalue ;
   
   ll temp1=lvalue/3 ;
   ll temp2=rvalue/3 ;
   ll temp=temp2-temp1 ;
   if(lvalue%3==0)
   {
        temp++ ;
   }
   cout << temp << endl ;
   

   
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