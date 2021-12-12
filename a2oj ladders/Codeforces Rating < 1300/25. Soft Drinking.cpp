#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n , k , l , c , d , p , nl , np  ;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np  ;
    int vol=k*l ;
    int slices=c*d ;
    int a=vol/nl , b=p/np ; 
    int ans=min(a,b) ;
    ans=min(ans,slices) ; // total toasts

    cout << ans/n << endl ;  // toasts by each friend


    return 0 ;
}