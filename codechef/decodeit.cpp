#include<bits/stdc++.h>
using namespace std ;
typedef long long int ll ;

int solution()
{
    int n ;
    cin >> n ;
    char s[n] ;
    for (int i = 0; i < n; i++)
    {
       cin >> s[i] ;
    }
    
    
    for (int i = 0; i < n; i=i+4)
    {
        int ans=0 ;
        int num1=0,num2=0,num3=0,num4=0;
        if (s[i]=='1')
        {
            num1=8 ;
        }   
         if (s[i+1]=='1')
        {
            num2=4 ;
        }   
         if (s[i+2]=='1')
        {
            num3=2 ;
        }   
         if (s[i+3]=='1')
        {
            num4=1 ;
        }  

        ans=num1+num2+num3+num4 + 97;
        cout << char(ans) ;

    }
    cout << "\n" ;
    
  
    return 0;
}

int main()
{
    ll t ;
    cin >> t ;
    for (ll i = 0; i < t; i++)
    {
        solution() ;
    }
    
    return 0 ;
}