#include <bits/stdc++.h>
using namespace std;
typedef long long ll ;


int main() 
{
    int t ;
    cin >> t  ;
    while(t--)
    {
        int n , k ;
        cin >> n   >> k ;
        string s ;
        cin >> s ;
        int ans=0 ;
        for(int i=0 ; i<n-k+1 ; i++)
        {
            int product=1 ; 
            int temp=0 ;
            int j=i ;
            while(temp<k && j<n)
            {
                int x=s[j]-'0' ;
                temp++  ;
                j++ ;
                product*=x  ;
            }
            
            ans=max(ans,product) ;
        }

        cout << ans << endl ;
    }
    
    
    return 0 ;
}
