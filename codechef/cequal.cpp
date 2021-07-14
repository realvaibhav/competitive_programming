#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
    ll n , flag=1;
    cin >> n ;
    ll arr[n] ;
    for (ll i = 0; i < n; i++)
    {
        cin >> arr[i] ;
    }
    sort(arr,arr+n);
    for (ll i = 0; i < n-1; i++)
    {
        if (arr[i]==arr[i+1])
        {
            flag=0 ;
            break ;
        }
        
    }
    if (flag==1)
    {
        cout << "No" << endl ;
    }
    else
    {
        cout << "Yes" << endl ;
    }

    return 0;
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

    return 0;
}