#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s ;
    cin >> s ;
    set<char> check  ;
    for(int i=0 ; i<s.size() ; i++)
    {
        check.insert(s[i]) ;
        auto it1=check.find('H') ;
        auto it2=check.find('Q') ;
        auto it3=check.find('9') ; // use '' with 9 as nine is a working as a character here
        auto it4=check.find('+') ;

        if(it1!=check.end())
        {
            cout << "YES" << endl ;
            return 0 ;
        }
        else if(it2!=check.end())
        {
            cout << "YES" << endl ;
            return 0 ;
        }
        else if(it3!=check.end())
        {
            cout << "YES" << endl ;
            return 0 ;
        }
        else
        {
            continue ;
        }
    }

    cout << "NO" << endl ;
    
    
    return 0 ;
}