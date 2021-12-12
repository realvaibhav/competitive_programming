#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s  ;
    cin >> s  ;
    string check=s ;
    int n=s.size() ;
    vector<char> vec ;
    int ans=0 , k=0 , res=0  ;
    for(int i=0 ; i<n ; i=i+2)
    {
        k = s[i];
        vec.push_back(k) ;
    }
    sort(vec.begin(),vec.end()) ;
    int x=0  ;
    for(int i=0 ; i<n ; i=i+2)
    {
        check[i]=vec[x]   ;
        x++   ;
    }
    
    cout << check << endl ;
    

    return 0 ;
}