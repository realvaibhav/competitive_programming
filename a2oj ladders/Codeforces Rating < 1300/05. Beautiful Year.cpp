#include<bits/stdc++.h>
using namespace std ;


int main()
{
    int n ;
    cin >> n ;
    int a=0 , b=0 , c=0 , d=0 , ans=0 ;
    
    while(true)
    {
        n++ ;
        int check=n ;
        a=check%10 ;
        check/=10 ;
        b=check%10 ;
        check/=10 ; 
        c=check%10 ;
        check/=10 ;
        d=check%10 ;

        set<int> s  ;
        s.insert(a) ;
        s.insert(b) ;
        s.insert(c) ;
        s.insert(d) ;

        if(s.size()==4)
        {
           ans=n ;
           break ;
        }

    }
    
    cout << ans << endl ;


    return 0 ;
}