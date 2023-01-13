#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 
#define PI 3.141592

void solve(ll test)
{
    ll r,a,b ;
    cin >> r >> a >> b ;
    long double sum=(3.141592*double(r*r)) ;
    ll pos=1 ;
    while(r!=0)
    {
        if(pos%2!=0)
        {
            r*=a ;
            sum=sum+ (3.141592*double(r*r)) ;
            pos++ ;
        }
        else
        {
            r/=b ;
            sum=sum+ (3.141592*double(r*r)) ;
            pos++ ;
        }

        if(r==0)
        {
            break ;
        }
    }

    cout << "Case #" << test << ": " << fixed << setprecision(6) << sum << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
 