#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;
#define endl "\n"

void solve()
{
    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int res=0, ans=INT_MAX ;
    for(int i=0 ; i<n-1 ; i++)
    {
        res=abs(arr[i+1]-arr[i]) ;
        ans=min(ans,res) ;
    }
    res=abs(arr[n-1]-arr[0]) ;
    if(res<=ans)
    {
        cout << 1 << " " << n << endl ;
    }
    else
    {
        for(int i=0 ; i<n-1 ; i++)
        {   
            res=abs(arr[i+1]-arr[i]) ;
            if(res==ans)
            {
                cout << i+1 << " " << i+2 << endl ;
                return ;
            }
        }
    }
    
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    solve() ;

    return 0 ;
}   