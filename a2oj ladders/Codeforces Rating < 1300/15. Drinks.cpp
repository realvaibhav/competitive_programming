#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , res=0 ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
        res+=arr[i] ;
    }
    
    double ans=0 ;
    ans=(double)res/n ;
    cout << setprecision(13) << ans << endl ;
    

    return 0 ;
}