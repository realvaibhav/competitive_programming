#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s  ;
    cin >> s  ;
    int ans=0 ;
    set<char> check ;
    for(int i=0 ; i<s.size() ; i++)
    {
        check.insert(s[i])  ;
    }
    ans=check.size() ;
    if(ans%2==0)
    {
        cout << "CHAT WITH HER!" << endl ;
    }
    else
    {
        cout << "IGNORE HIM!" << endl ;
    }
    
    

    return 0 ;
}