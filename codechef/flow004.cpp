#include<bits/stdc++.h>
using namespace std ;

int solution()
{
    int n ; 
    cin >> n ;
    int last=0 ;
    last=n%10 ;
    while (n>=10)
    {
        n=n/10 ;
    }
    
    cout << last+n << "\n"  ;

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