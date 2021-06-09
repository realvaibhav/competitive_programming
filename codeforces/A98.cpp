#include<bits/stdc++.h>
using namespace std ;

int solution()
{
    int x,y,d=0 ; 
    cin >> x >> y ;
    if(x==0&&y==0)
    {
       cout << 0 << "\n" ;
    }
    else if (x==y)
    {
         cout << x+y << "\n" ;
    }
    else if (x==0)
    {
        if (y%2==0)
        {
           cout << 2*y << "\n" ;
        }
        else
        {
            cout << 2*y - 1 << "\n" ;
        }
    }
    else if (y==0)
    {
        if (x%2==0)
        {
           cout << 2*x << "\n" ;
        }
        else
        {
            cout << 2*x - 1 << "\n" ;
        }
    }
    else if (x>y)
    {
        d=x-y ;
         if (d%2==0)
        {
           cout << 2*d + 2*y << "\n" ;
        }
        else
        {
            cout << 2*d-1 + 2*y << "\n" ;
        }

    }

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