#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    ll n , k ;
    cin >> n >> k ;
    if(n%2==0)
    {
        if(k<=(n/2))
        {
            cout << 2*k-1 << endl ;
        }
        else
        {
            cout << 2*(k-n/2) << endl ;
        }
    }
    else
    {
        if(k<=(n/2+1))
        {
            cout << 2*k-1 << endl ;
        }
        else
        {
            cout << 2*(k-n/2-1) << endl ;
        }
    }
        
    

    return 0  ;
}
