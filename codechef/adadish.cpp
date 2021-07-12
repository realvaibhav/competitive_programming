#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    ll n,max=0,time=0,d=0 ; 
    cin >> n ;
    ll arr[n];
    for (ll i = 0; i <n; i++)
    {
       cin >> arr[i] ;
    }
    sort(arr,arr+n) ;
    d=arr[0];
    max=arr[n-1] ;
    time=arr[n-1] ;
    if(n==1)
    {
        cout << d  << "\n" ;
    }
    else
    {
        for (ll i = n-2; i>=0; i--)
        {
            if (max-arr[i]>=0)
            {
               max=max-arr[i] ;
            }
            else
            {
                max=arr[i]-max ;
                time+=max;
            }
        }
          cout << time << "\n" ;
    }
    
    
    return 0;
}

int main()
{
    ll t;
    cin >> t;
    for ( ll i = 0; i < t; i++)
    {
       solution() ;
    }
   return 0; 
}