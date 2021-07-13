#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;
int solution()
{
    ll n ,ans=0 ;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }

    sort(arr,arr+n) ;

    cout << arr[0] + arr[1] << "\n" ;


    

    return 0;
}

int main() 
{
    ll t ;
    cin >> t ;
    while(t>0)
    {
        solution() ;
        t-- ;
    }

	return 0;
}

