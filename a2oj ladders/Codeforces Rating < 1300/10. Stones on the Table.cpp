#include<bits/stdc++.h>
using namespace std  ;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >>  n ;
    string s ; 
    cin >> s ;
    int count=0  ;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(s[i]=='R' && s[i]==s[i+1])
        {
            count++  ;
        }
        if(s[i]=='G' && s[i]==s[i+1])
        {
            count++  ;
        }
        if(s[i]=='B' && s[i]==s[i+1])
        {
            count++  ;
        }
    }
     
    cout << count << endl ; 
    

    return 0 ;
}