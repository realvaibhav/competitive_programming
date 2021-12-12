#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    if(n&1)
    {
        cout << "-1" << "\n" ;
    }
    else
    {
        for(int i=n ; i>=1 ; i--)
        {
            cout << i << " " ;
        }
        cout << endl  ;
    }
    

    return 0 ;
}