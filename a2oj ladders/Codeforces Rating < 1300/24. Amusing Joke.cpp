#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{   
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1 , s2 , s3 ;
    cin >> s1 >> s2 >> s3 ;
    string s=s1+s2 ;
    sort(s.begin(),s.end()) ;
    sort(s3.begin(),s3.end()) ;  
    
    if(s==s3)
    {
        cout << "YES" << endl ;
    }
    else
    {
        cout << "NO" << endl ;
    }

    
    

    return 0 ;
}