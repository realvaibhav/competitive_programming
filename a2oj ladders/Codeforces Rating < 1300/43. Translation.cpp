#include <bits/stdc++.h>
using namespace std;
typedef long long int ll ;

int main()
{
    string s  ;
    cin >> s  ;
    string t  ;
    cin >> t  ;

    reverse(s.begin(), s.end());   

    if(s==t)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl  ;
    }
    
    
    return 0  ;
}
