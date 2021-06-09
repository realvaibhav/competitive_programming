#include<bits/stdc++.h>
using namespace std ;

int solution()
{
    int n , k , count=1 ; 
    cin >> n >> k;
    string s;
    if (k==n)
    {
       for (int i = 1; i <=n; i++)
       {
          cout << 'a';
       }
       
    }
    else
    {
    for (int i = 1; i <=n; i++) 
    {
        if(i<=k)
        {
            cout << 'a' ;
        }
        else
        {
          cout << 'c';
          i++ ;
          if(i<=n)
          {
               cout << 'b';
               i++ ;
               if(i<=n)
               {
                   cout << 'a';
               }
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