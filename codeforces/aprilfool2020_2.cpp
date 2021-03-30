#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    int n ;
    cin >> n ;
    int x=2 , ans=0 , res=0  ;

    while(true)
    {
        if(n%x==0)
        {
            ans=n/x ;
            res=x ;
            break ;
    
        }
        else
        {
            x++ ;
        }
        
    }

    cout << res << ans << endl ;

    return 0;
}