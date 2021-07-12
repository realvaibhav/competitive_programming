#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    ll a,b,res=0 ;
    cin >> a >> b ;
    res=a*b ;
    if (res%2==0)
    {
       cout << res/2 << "\n" ;
    }
    else
    {
        cout << res/2 + 1 << "\n" ;
    }
    
    

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