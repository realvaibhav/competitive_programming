#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
const ll m=1000000007   ;


void solution()
{ 
    ll l,r,k  ;
    cin >> l >> r >> k ;

    if(l==r && l==1)
    {
        cout << "NO" << endl ;
    }
    else
    {
        if(k==0)
        {
            if(l==r)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
        else
        {
            int odd=0 ;
            if(l%2==0 && r%2==0)
            {
                odd=(r-l)/2 ;
            }
            else if(!(l%2==0 && r%2==0))
            {
                odd=(r-l)/2 +1 ;
            }
            else
            {
                odd=(r-l)/2 +1 ; 
            }

            if(k>=odd)
            {
                cout << "YES" << endl ;
            }
            else
            {
                cout << "NO" << endl ;
            }
        }
    }



}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

   ll t ;
   cin >> t ;
   for (ll i = 0; i < t; i++)
   {
      solution() ;
   }  


   return 0  ;
}