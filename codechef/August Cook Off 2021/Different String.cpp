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
   string str[n] ;
   for(int i=0 ; i<n ; i++)
   {
       cin >> str[i] ;
   }
   unordered_multiset<string> s ;
   for(int i=0 ; i<n ; i++)
   {
       s.insert(str[i]) ;
   }
   string temp=str[0] ;
   for(int i=0 ; i<n ; i++)
   {
       temp[i]='1' ;
   }
   for(int i=0 ; i<n ; i++)
   {
       auto it=s.find(temp) ;
       if(it==s.end())
        {
            cout << temp << endl ;
            return 0 ;
        }

        temp[i]='0' ;

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