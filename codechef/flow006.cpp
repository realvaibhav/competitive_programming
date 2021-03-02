#include<bits/stdc++.h>
using namespace std ;

int main()
{
    int t ;
    cin >> t ;
    while (t>0)
    {
       int n,r=0,sum=0 ;
       cin >> n ;
       while(n>0)
       {
           r=n%10;
           n=n/10 ;
           sum=sum+r;
       }
       cout << sum << "\n" ;
       t-- ;
    }
    
    return 0;
}