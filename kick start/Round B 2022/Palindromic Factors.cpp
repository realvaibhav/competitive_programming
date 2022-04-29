#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define endl "\n" 

ll checkpalin(ll n)
{
    int r=0 , check=n , res=0 , ans=0 ;
    while (n!=0)
    {
       r=n%10 ;
       res=res*10+r ;
       n/=10 ;
    }
    if (check==res)
    {
       return 1 ;
    }
    else
    {
       return -1 ;
    }

    return 0 ;
}


void solve(ll test)
{
    ll n ;
    cin >> n ;
    ll count=0 ;
    vector<ll> vec ;
    ll num1=0 , num2=0 ;
    for(ll i=1 ; i<=sqrt(n) ; i++) 
    {
        if(n%i==0)
        {
            num1=i   ;
            num2=n/i ;
        
            if(num1!=num2)
            {
                ll temp=checkpalin(num1) ;
                if(temp==1)
                {
                    count++ ;
                }

                temp=checkpalin(num2) ;
                if(temp==1)
                {
                    count++ ;
                }
            }
            else
            {
                ll temp=checkpalin(num1) ;
                if(temp==1)
                {
                    count++ ;
                }
            }
        }
    }
    
    cout << "Case #" << test << ": " << count << endl ;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    ll t ;
    cin >> t ;
    for (ll i=1; i<=t; i++)
    {
      solve(i) ;
    }

    return 0;
} 
