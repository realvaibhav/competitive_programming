#include<bits/stdc++.h>
using namespace std ;
typedef long long ll ;
#define MAX 1000000
#define endl "\n" 


int solution()
{
   
   int n ;
   cin >> n ;
   char arr[n][n] ;
   int count=1 ;
   int i1=0 ,j1=0,i2=0,j2=0 ;
   int a1=0,b1=0,a2=0,b2=0 ;

   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
           cin >> arr[i][j] ;
        }
       
   }
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
           if ((arr[i][j]=='*')&&(count==1))
           {
               i1=i ;
               j1=j ;
               count++ ; 
           }
           else if ((arr[i][j]=='*')&&(count==2))
           {
               i2=i ;
               j2=j ;
               break ;
           }      
        }
   }
   
   if (i1==i2 && i1!=n-1)
   {
       a1=i1+1 ;
       b1=j1 ;
       a2=i2+1 ;
       b2=j2 ;
   }
   else if (j1==j2 && j1!=n-1)
   {
       a1=i1 ;
       b1=j1+1 ;
       a2=i2 ;
       b2=j2+1 ;
   }
   else if (i1==i2 && i1==n-1)
   {
       a1=i1-1 ;
       b1=j1 ;
       a2=i2-1 ;
       b2=j2 ;
   }
   else if (j1==j2 && j1==n-1)
   {
       a1=i1 ;
       b1=j1-1 ;
       a2=i2 ;
       b2=j2-1 ;
   }
   else
   {
       a1=i1 ;
       b1=j2 ;
       a2=i2 ;
       b2=j1 ;
   }
   
    arr[a1][b1]='*' ;
    arr[a2][b2]='*' ;
   
   for (int i = 0; i < n; i++)
   {
        for (int j = 0; j < n; j++)
        {
           cout << arr[i][j] ;
        }
       cout << endl ;
   }
   
   return 0;
}


int main()
{
   ios_base::sync_with_stdio(false);
   cin.tie(NULL);

    int t ;
    cin >> t ;
    for (int i = 0; i < t; i++)
    {
       solution() ;
    }

    return 0;
}