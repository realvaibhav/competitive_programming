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
   int n , k  ;
   cin >> n >> k ;
   string s ;
   cin >> s ;
   int count=0 ;
   for(int i=0 ; i<n-1 ; i++)
   {
        if(s[i]!=s[i+1])
        {
            count++ ;
        }
   }

   if(k>count || count==0)
   {
       cout << "-1" << endl   ;
   }
   else
   {
       if(s[0]=='1')
       {
           if(k%2==0)
           {
               for(int i=n-1 ; i>=0 ; i--)
               {
                   if(s[i]=='1')
                   {
                       cout << i+1 << endl ;
                       return 0 ;
                   }
               }
           }
           else
           {
               for(int i=n-1 ; i>=0 ; i--)
               {
                   if(s[i]=='0')
                   {
                       cout << i+1 << endl ;
                       return 0 ;
                   }
               }
           }
       }
       else // s[i]=='0'
       {
           if(k%2==0)
           {
               for(int i=n-1 ; i>=0 ; i--)
               {
                   if(s[i]=='0')
                   {
                       cout << i+1 << endl ;
                       return 0 ;
                   }
               }
           }
           else
           {
               for(int i=n-1 ; i>=0 ; i--)
               {
                   if(s[i]=='1')
                   {
                       cout << i+1 << endl ;
                       return 0 ;
                   }
               }
           }
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