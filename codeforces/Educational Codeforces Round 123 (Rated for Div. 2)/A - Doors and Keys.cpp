#include<bits/stdc++.h>
using namespace std ;

void solve()
{
      string s ;
      cin >> s ;
      unordered_set<char> st ;
      for(int i=0 ; i<6 ; i++)
      {
         if(s[i]=='R' || s[i]=='G' || s[i]=='B')
         {
            if(st.count(char(s[i]+32))==0)
            {
               cout << "NO" << endl ;
               return ;
            }
         }
         else
         {
            st.insert(s[i]) ;
         }
      }

      cout << "YES" << endl ;
}

int main()
{
   int t ;
   cin >> t ;
   while(t--)
   {
      solve() ;
   }
   
   return 0 ;
}