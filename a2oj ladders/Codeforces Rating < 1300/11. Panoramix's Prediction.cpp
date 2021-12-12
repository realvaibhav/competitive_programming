#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m ;
    cin >> n >> m ; 
    int count=0 ;
    for(int i=n+1 ; i<=m-1 ; i++)
    {
        count=0  ;
        for(int j=2 ; j<i ; j++)
        {
            if(i%j==0)
            {
                count++ ;
            }
        }
        if(!count)
        {
            cout << "NO" << "\n" ;
            return 0 ;
        }
    }
    
    count=0 ;
    for(int j=2 ; j<m ; j++)
    {
        if(m%j==0)
        {
            count++ ;
        }
    }

    if(!count)
    {
        cout << "YES" << "\n" ;
    }
    else
    {
        cout << "NO" << "\n" ;
    }

    
    

    return 0 ;
}