#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000000
#define endl "\n" 
// for(int i=0 ; i<n ; i++)
// vector<int> vec 
// set<int> s 

int solution()
{ 
   int n , seats , events ;
   cin >> n >>  seats >> events ;
   unordered_set<int> s ;
   int count=0  ;
   bool flag=true  ;
   char ch ;
   int x ;
   for(int i=0 ; i<events ; i++)
   {

       cin >> ch >> x ;  

       if(ch=='+')
       {
           count++ ;
           s.insert(x) ;
           if(count>seats)
           {
               flag=false ;
               break ;
           }
       }
       else
       {
           count-- ;
           auto k=s.find(x) ;
           if(k==s.end())
           {
               flag=false ;
               break ;
           }
       }

   }

   if(flag==true)
   {
       cout << "Consistent" << endl ;
   }
   else
   {
       cout << "Inconsistent" << endl ;
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