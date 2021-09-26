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
   ll m=1000000007 ;
   ll a , b ;
   cin >> a >> b ;
   a=a%m ;
   b=b%m ;

   //  if every prime factor of 'a' divides 'b' , then print "YES" else "NO" 

   while(true)
   {
       ll temp=__gcd(a,b) ; 
       if(temp==1)
       {
           break ;
       }
       
       a=a/temp ;
   }

   if(a==1)
   {
       cout << "YES" << endl ;
   }
   else
   {
       cout << "NO" << endl ;
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