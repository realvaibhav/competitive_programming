#include<bits/stdc++.h>
using namespace std ;


int solve(int m,int k)
{   
    int q=0,sum=0 ;
    int arr[k] ;
    for (int i = 0; i < k; i++)
    {
        cin >> arr[i] ;
        sum=sum+arr[i] ;
    }
    cin >> q ;
    if (sum>=m&&q<=10)
    {
       return 1;
    }
    else
    {
        return 0 ;
    }
    

}

int main()
{
    
    int n,m,k,ans=0,count=0; 
    cin >> n >> m >> k ;
    for ( int i = 0 ; i < n ; i++ )
    {
        ans=solve(m,k) ;
        if (ans==1)
        {
           count ++ ;
        }
        
    }
    cout << count << "\n" ;

    return 0;
}