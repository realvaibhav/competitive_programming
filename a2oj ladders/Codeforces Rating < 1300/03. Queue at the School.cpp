#include<bits/stdc++.h>
using namespace std  ;

int main()
{
    int n , t ;
    cin >> n >> t ;
    string s ;
    cin >> s ;
    int count=0  ;
    for(int i=0 ; i<n ; i++)
    {
        for(int j=0 ; j<n-1 ; j++)
        {
            if((s[j]=='B' && s[j+1]=='G')&&(count<t))
            {
                swap(s[j],s[j+1]) ;
                j++ ;
            }
            
        }
        
        count++ ;
    }

    cout << s << endl ;

    return 0 ;
}