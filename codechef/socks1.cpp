#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;
#define MAX 1000000
#define endl "\n" 

int main()
{
    int color1,color2,color3 ;
    cin >> color1 >> color2 >> color3 ;

    if ((color1==color2)||(color2==color3)||(color3==color1))
    {
       cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }
    
 
    return 0;
}