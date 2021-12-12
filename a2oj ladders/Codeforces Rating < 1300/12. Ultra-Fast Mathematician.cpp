#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s1 , s2 ;
    cin >> s1 >> s2 ;
    vector<int> vec ;
    for(int i=0 ; i<s1.size() ; i++)
    {
        if(s1[i]==s2[i])
        {
            vec.push_back(0) ;
        }
        else
        {
            vec.push_back(1) ;
        }
    }

    for(auto x:vec) 
    {
        cout << x ;
    }
    
    cout << endl ;
    

    return 0 ;
}