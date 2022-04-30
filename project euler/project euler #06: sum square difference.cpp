#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{  
    ll t ;
    cin >> t ;
    while(t--)
    {
        ll n ;
        cin >> n ;
        ll sum=0 , square=0  ; 
        for(ll i=1 ; i<=n ; i++)
        {
            sum+=i ;    
            square+=(i*i) ;
        }
        sum*=sum ;

        cout << abs(square-sum) << endl ;

        
    }


    return 0  ;
}
