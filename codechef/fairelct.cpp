#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    ll n , m , count=0 , win=0 , lose=0 ,d=0 ;
    cin >> n >> m ;
    ll arr[n],brr[m] ;
    for (ll i = 0; i < n; i++)
    {
          cin >> arr[i] ;
          win=win+arr[i] ;
    }
    for (ll i = 0; i < m; i++)
    {
          cin >> brr[i] ;
          lose += brr[i] ;
    }
    d=min(n,m);
    sort(arr,arr+n) ;
    sort(brr, brr + m, greater<int>());
    if (win>lose)
    {
        cout << 0 << endl ;
    }
    else
    {
            for (ll i = 0; i < d; i++)
            {
                if (win<=lose)
                {
                   if (brr[i]>arr[i])
                   {
                       count++ ;
                       win=win+(brr[i]-arr[i]) ;
                       lose=lose+(arr[i]-brr[i]) ;        
                   }
                   
                }
                
            }

        if (win>lose)
        {
            cout << count << "\n" ;
        }
        else
        {
            cout << "-1" << "\n" ;
        }
        
            
    }
 
    return 0;
}

int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solution() ;
    }
    
    return 0 ;
}