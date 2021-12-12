#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int a , b , res=0 , ans=0 ; 
    for(int i=0 ; i<n ; i++)
    {
        cin >> a >> b ;
        res+=(b-a) ;
        ans=max(ans,res)  ;
    }
    
    cout << ans << endl ;

    
    return 0 ;
}