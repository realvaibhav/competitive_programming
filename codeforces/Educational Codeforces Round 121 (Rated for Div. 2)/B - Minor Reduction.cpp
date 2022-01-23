#include<bits/stdc++.h>
using namespace std ;

int main()
{
    long long t ;
    cin >> t ;
    while(t--)
    {
        string s ;
        cin >> s ;
        long long n=s.size() ;
        bool flag=false ;

        for(long long i=n-1 ; i>=1 ; i--)
        {
            long long r1=s[i]-48 ;
            long long r2=s[i-1]-48 ;

            if((r1+r2)>=10)
            {
                flag=true ;
                break ;
            }

        }

    
        if(flag==true)
        {
            long long v=0 ;
            long long x1=0 ;
            long long x2=0 ;
            for(long long i=n-1 ; i>=1 ; i--)
            {
                long long p1=s[i]-48 ;
                long long p2=s[i-1]-48 ;
                if((p1+p2)>=10)
                {
                    long long a=s[i]-48 ;
                    long long b=s[i-1]-48 ;
                    long long res=a+b ;
                    x2=res%10 ;
                    res/=10 ;
                    x1=res%10 ;
                
                    v=i ;  
                    break ;         
                }
            }

            for(long long i=0 ; i<n ; i++)
            {
                if(i==v-1)
                {
                    cout << x1 ;
                }
                else if(i==v)
                {
                    cout << x2 ;
                }
                else
                {
                    cout << s[i] ;
                }
            }

            cout << endl ;
        }
        else
        {
            long long a=s[0]-48 ;
            long long b=s[1]-48 ;
            cout << a+b ;

            string ans=s.substr(2) ;
            cout << ans << endl ;
        }
    }   
    
    return 0 ;
}