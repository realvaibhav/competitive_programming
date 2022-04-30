#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;


bool arr[MAX+1] ;

void method()
{
    memset(arr,false,sizeof(arr)) ;
    for(long long i=2 ; i*i<=MAX ; i++)
    {
        for(long long j=i*i ; j<=MAX ; j=j+i)
        {
            if(arr[j]==false)
            {
                arr[j]=true ;
            }
        }
    }
}

long long prime(long long n)
{
    long long count=0 , ans=0 ;
    for(long long i=2 ; i<=MAX ; i++)  // carefull at this line , don't use i<=n here in this question
    {
       if(arr[i]==false)
       {
           count++ ;
       }
       if(count==n)
       {
           ans=i ;
           break ;
       }
    }
    
    cout << ans << endl ;


    return 0 ;
}


int main() 
{
    long long t ;
    cin >> t  ;
    method() ;
    while(t--)
    {
        long long n ;
        cin >> n ;
        prime(n) ;             
    }
    
    
    
    return 0 ;
}
