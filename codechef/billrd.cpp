#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    ll n , k , ans=0 , res=0 , x=0 , y=0 , cx=0 , cy=0 , d=0  ;
    cin  >> n >> k >> x >> y ;
    d=k%4 ;

    if (x==y)
    {
        cout << n << " " << n ;
    }
    else if (x>y)
    {

        cx=y-x ;
        cx=abs(cx) ;
        if (d==1)
        {
            cout << n << " " << n-cx ;
        }
        else if (d==2)
        {
           cout << n-cx  << " " << n ;
        }
        else if (d==3)
        {
            cout << 0 << " " << cx ;
        }
        else
        {
            cout << cx << " " << 0 ;
        } 
        
    }
    else
    {
        cy=y-x  ;
        if (d==1)
        {
            cout << n-cy << " " << n ;
        }
        else if (d==2)
        {
           cout << n  << " " << n-cy ;
        }
        else if (d==3)
        {
            cout << cy << " " << 0 ;
        }
        else
        {
            cout << 0 << " " <<  cy ;
        } 

    }
    
    cout << "\n" ;

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