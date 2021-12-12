#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;

int main()
{
    ll n ;
    cin >> n ;
    ll count=0 , x=0 ;
    

    while(n!=0)
    {
        x=n%10 ;
        if(x==4 || x==7)
        {
            count++  ;
        }

        n=n/10 ;
    }


    if(count==4 || count==7)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
    return 0 ;
    
}