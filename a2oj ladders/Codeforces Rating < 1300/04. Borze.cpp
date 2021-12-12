#include<bits/stdc++.h>
using namespace std ;


int main()
{
    string s ;
    cin >> s ;
    int n=s.size()  ;
    string check=s ;
    vector<int> vec ;
    for(int i=0 ; i<n-1 ; i++)
    {
        if(s[i]=='.')
        {
            vec.push_back(0) ;
            check[i]=0 ;
        }
        if(s[i]=='-' && s[i+1]=='.')
        {
            vec.push_back(1) ;
            check[i]=0 ;
            check[i+1]=0 ;
            i++ ;
        }
        if (s[i]=='-' && s[i+1]=='-')
        {
            vec.push_back(2) ;
            check[i]=0 ;
            check[i+1]=0 ;
            i++ ;
        }
        
    }
    if(check[n-1]!=0 && check[n-1]=='.')
    {
        vec.push_back(0) ;
    }
    for(auto x:vec)
    {
        cout << x ;
    }

    cout << endl ;


    return 0 ;
}