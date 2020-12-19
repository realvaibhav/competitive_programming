#include<bits/stdc++.h>
using namespace std ;

int solution()
{

    int n ; 
    cin >> n ;
    int arr[n] ;
    for ( int i = 0 ; i < n ; i++ )
    {
        cin >> arr[i] ;
    }
    if (n%2==0)
    {
        for (int i = 0; i < n/2; i++)
        {
        cout << arr[i] << " " << arr[n-1-i] << " " ;
        }
    }
    else
    { 
        for (int i = 0; i < (n/2)+1; i++)
        {
          if (i!=n-1-i)
          {
             cout << arr[i] << " " << arr[n-1-i] << " " ;
          }
          else
          {
              cout << arr[n-1-i] ;
          }
          
          
        }
    }
    
    cout << "\n" ;

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