#include<bits/stdc++.h>
using namespace std ;

int solution()
{
    int n,sum=0 ; 
    cin >> n ;
    if (n%2==0)
    {
        for (int i = n; i>=1; i--)
        {
            cout << i << " " ;
        }  
    }
    else
    {
        cout << n << " " ;
        for (int i =1; i<=n-1; i++)
        {
            cout << i << " " ;
        } 
        
    }
    
    cout << "\n" ;
    return 0;
}

int main()
{
    int t;
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ )
    {
       solution() ;
    }
    
    return 0; 

}