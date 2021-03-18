#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 


int main()
{
    ll t ;
    cin >> t ;
    while (t--)
    {
        ll n , eat=0 ;
        cin >> n ; 
    
        if (n%2==0)
        {
            eat=(n/2)-1 ;
            cout << n - eat << endl ;
        }
        else
        {
        cout << (n+1)/2 << endl ;
        }
    
    }
    

    return 0;
}