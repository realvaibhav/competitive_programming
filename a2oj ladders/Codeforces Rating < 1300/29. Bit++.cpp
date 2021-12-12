#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int x=0 ;
    for(int i=0 ; i<n ; i++)
    {
        string s ;
        cin >> s ;
        if(s[1]=='+')
        {
            x+=1 ;
        }
        else
        {
            x-=1 ;
        }
    }

    cout << x << endl ;
    

    return 0 ;
}