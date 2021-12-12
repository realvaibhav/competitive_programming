#include <bits/stdc++.h>
#define MAX 1000000
using namespace std;


bool arr[MAX+1] ;
vector<long long> vec ;

void method()
{
    memset(arr,true,sizeof(arr)) ;
    for(long long i=2 ; i*i<=MAX ; i++)
    {
        for(long long j=i*i ; j<=MAX ; j=j+i)
        {
            if(arr[j]==true)
            {
                arr[j]=false ;
            }
        }
    }
    for(long long i=2 ; i<=MAX ; i++)  
    {
       if(arr[i]==true)
       {
           vec.push_back(i) ;
       }
    }
}
long long prime(long long n)
{
    long long i=0 , sum=0 ;
    while(vec[i]<=n) // prime not greater than n 
    {
        sum+=vec[i] ;
        i++ ;
    }
    cout << sum << endl ;

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
