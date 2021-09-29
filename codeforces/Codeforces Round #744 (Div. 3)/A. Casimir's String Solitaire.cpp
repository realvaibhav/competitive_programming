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
   string s ;
   cin >> s ;
   int n=s.size() ;
   bool flag=true ;
   if(n%2!=0)
   {
       cout << "NO" << endl ;
       return ;
   }
   int a=0 , b=0 , c=0  ;
   for(int i=0 ; i<n ; i++)
   {
       if(s[i]=='A')
       {
           a++ ;
       }
       else if(s[i]=='B')
       {
           b++ ;
       }
       else
       {
           c++ ;
       }
   }

   if(b==a+c)
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