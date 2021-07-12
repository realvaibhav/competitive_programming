#include<bits/stdc++.h>
using namespace std ;

int solution()
{
    int n , risk=0 ,vac , mast=0,ans=0,res=0 ; 
    cin >> n >> vac ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    for ( int i = 0 ; i < n ; i++ )
    {
       if (arr[i]<=9||arr[i]>=80)
       {
           risk++ ;
       }
       else
       {
           mast++ ;
       }  
    }
    if (risk%vac==0)
    {
        ans = risk/vac  ;
    }
    else
    {
        ans = risk/vac + 1 ;
    }
    if (mast%vac==0)
    {
        res = mast/vac  ;
    }
    else
    {
        res = mast/vac + 1 ;
    }

    cout << ans + res << "\n" ;
    


    return 0;
}

int main()
{
    int t;
    cin >> t ;
    for ( int i = 0 ; i < t ; i++ )
    {
       solution() ;
    }
    
    return 0; 

}