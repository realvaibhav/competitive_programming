#include<bits/stdc++.h>
using namespace std ;
#define endl "\n" 

void solve()
{
    int n,m ;
    cin >> n >> m ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int ans=0 ;
    sort(arr,arr+n) ;
    for(int i=0 ; i<n ; i++)
    {
        if(m>0)
        {
            if(arr[i]<0)
            {
                ans+=arr[i] ;
                m-- ;
            }
            else
            {
                break ;
            }
        }
        else
        {
            break ;
        }
    }

    cout << abs(ans) << endl ;
}


int main()
{
   solve() ;
   
   return 0  ;
}