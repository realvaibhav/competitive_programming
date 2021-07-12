#include<bits/stdc++.h>
using namespace std ;


int solution()
{

    int n , k , count=1,d=0 ;
    cin >> n >> k ;
    int arr[n] ;
    d=n-k;
   
   if (k==n)
   { 
       for(int i=1; i<=n ; i++)
       {
          cout << i << " " ;
       }
   }
   else
   {
        if (k>d)
        {
            for (int i = 1; i <=n; i++)
            {
               if (i%2!=0 && count<=d)
               {
                  cout << -i << " " ;
                  count++ ;
               }
               else
               {
                   cout << i << " " ;
               }
 
            }  
        }
        else if(k<d)
        {
            for (int i = 1; i <=n; i++)
            {
               if (i%2!=0 && count<=k)
               {
                  cout << i << " " ;
                  count++ ;
               }
               else
               {
                   cout << -i << " " ;
               }
            }  
        }
        else 
        {
            for (int i = 1; i <=n; i++)
            {
               if (i%2!=0)
               {
                  cout << -i << " " ;
               }
               else
               {
                   cout << i << " " ;
               }
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