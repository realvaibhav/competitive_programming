#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
int solution()
{
    ll n,f=1; 
    cin >> n ;
    ll arr[n] ;
    for ( ll i = 1 ; i <= n ; i++ )
    {
       f=f*i ;
    }
    
    cout << f << "\n" ;

    return 0;
}

int main()
{
   ll t;
    cin >> t ;
    for ( ll i = 0 ; i < t ; i++ )
    {
       solution() ;
    }
    
    return 0; 

}






// #include<bits/stdc++.h>
// using namespace std ;
// typedef long long int ll  ;

// int fact(int n) 
// {
//     ll ans=1 ;
//     if(n==0||n==1)
//     {
//         return (1) ;
//     }
//     else
//     {
//        ans = n * fact(n-1) ;
//     }
//        return ans ;
// }

// int main()
// {
//     ll t ;
//     cin >> t ;

//     while (t>0)
//     {
//        ll n,res=1 ;
//        cin >> n; 
//        res=fact(n) ;
//        cout << res << "\n" ;

//        t-- ;
//     }

//     return 0;
// }