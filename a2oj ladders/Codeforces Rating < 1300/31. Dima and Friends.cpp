#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    int n  ;
    cin >> n ;
    int value , sum=0 ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> value ;
        sum+=value   ;
    }
    int ans=0 ;
    for(int i=1 ; i<=5 ; i++)
    {
        if( (sum+i) % (n+1) != 1)
        {
            ans++ ;
        }
    }
    
    cout << ans  << endl  ;

    return 0  ;
}

