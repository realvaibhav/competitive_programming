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
   cin >> s ;
   string p ;
   cin >> p ;
   if(s==p)
   {
       cout << "YES" << endl ;
   }
   else
   {
        int s_zero=0 ;
        for(int i=0 ; i<n ; i++)
        {
            if(s[i]=='0')
            {
                s_zero++ ;
            }
        }
        int p_zero=0 ;
        for(int i=0 ; i<n ; i++)
        {
            if(p[i]=='0')
            {
                p_zero++ ;
            }
        }

        if(p_zero==0 || p_zero==n)
        {
            cout << "NO" << endl ;
        }
        else
        {
            cout << "YES" << endl ;
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