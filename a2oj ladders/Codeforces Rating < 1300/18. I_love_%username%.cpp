#include<bits/stdc++.h>
using namespace std  ;
typedef long long int ll ;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n ;
    cin >> n ;
    int arr[n] ;
    for(int i=0 ; i<n ; i++)
    {
        cin >> arr[i] ;
    }
    int a=arr[0] , b=0 , c=0 , count=0 ;
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]<a)
        {
            count++ ;
            b=arr[i] ;
            break ;
        }
    }
    
    for(int i=1 ; i<n ; i++)
    {
        if(arr[i]>a)
        {
            count++ ;
            a=arr[i] ;
        }
        else if(arr[i]<b)
        {
            count++ ;
            b=arr[i] ;
        }
    }

    cout << count << endl ;
    

    return 0 ;
}