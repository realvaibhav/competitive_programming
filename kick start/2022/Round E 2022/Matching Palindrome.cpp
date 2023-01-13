#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

bool checkPalin(string temp)
{
   ll len=temp.length() ;
   ll i=0, j=len-1 ;
   string check=temp ;
   while(i<j)
   {
      swap(check[i],check[j]) ;
      i++ ;
      j-- ;
   }

   if(check==temp)
   {
      return true ;
   }
   else
   {
      return false ;
   }
}

void solve(ll test)
{
    ll n ;
    cin >> n ;
    string s ;
    cin >> s ;
    string temp=s ;
    string ans="" ;
    for(ll i=0 ; i<n; i++)
    {
      temp+=s[i] ;
      ans+=s[i] ;

      bool res=checkPalin(temp) ;
      if(res)
      {
         cout << "Case #" << test << ": "   ;
         cout << ans << endl ;
         return ;
      }
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
