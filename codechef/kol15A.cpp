#include <bits/stdc++.h>
using namespace std;
 
 int solve()
 {
   int count=0,sum=0 ;
   string s;
   cin >> s ;
   for (int i=0;i<s.size();i++) 
   {
      if( s[i] <='9' && s[i]>='1')
      {
        sum=sum+( s[i] - '0' ) ;
      }
   }
	
   cout << sum << "\n" ;
   return 0;
 }

int main() 
{
    int t;
    cin >> t;
    for(int i=0;i<t;i++)
    {
        solve() ;
    }
  
	return 0;
}
