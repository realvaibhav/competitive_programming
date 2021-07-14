#include <iostream>
using namespace std;
typedef long long int ll ;
int solution()
{
    ll a , b , c , max=0,ans=0 ;
    cin  >> a>> b>> c;
    if (a>b&&a>c)
    {
        if (b>c)
        {
             cout << b << "\n" ;
        }
        else
        {
             cout << c << "\n" ;
        }
        
    }
    else if (b>a&&b>c)
    {
       if (a>c)
        {
             cout << a << "\n" ;
        }
        else
        {
             cout << c << "\n" ;
        }
    }
    else if (c>a&&c>b)
    {
        if (a>b)
        {
             cout << a << "\n" ;
        }
        else
        {
             cout << b << "\n" ;
        }
    }
    
    
    return 0;
}

int main() 
{
    int t ;
    cin >> t ;
    while(t>0)
    {
        solution() ;
        t-- ;
    }

	return 0;
}
